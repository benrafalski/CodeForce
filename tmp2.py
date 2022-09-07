# from matplotlib.colors import from_levels_and_colors
from ctypes import *


class Assembler: 

    def __init__(self): 
        print('Emulator began execution!')

        self.memory = (c_byte * 0xffffff)()
        self.memory_address = (c_size_t)(addressof(self.memory))

        self.registers = {
            0: {
              "name" : "NONE",  
            },
            2: {
              "name" : "a",
              "address": c_byte.from_address(self.memory_address + 0x400)  
            },
            16: {
              "name" : "b",
              "address": c_byte.from_address(self.memory_address + 0x401)  
            },
            64: {
              "name" : "c",
              "address": c_byte.from_address(self.memory_address + 0x402)  
            },
            1: {
              "name" : "d",
              "address": c_byte.from_address(self.memory_address + 0x403)  
            },
            8: {
              "name" : "s",
              "address": c_byte.from_address(self.memory_address + 0x404)  
            },
            32: {
              "name" : "i",
              "address": c_byte.from_address(self.memory_address + 0x405)  
            },
            4: {
              "name" : "f",
              "address": c_byte.from_address(self.memory_address + 0x406)  
            },
        }

        self.instr_struct = {
            "opcode": 8,
            "arg1": 0,
            "arg2": 0x10
        }

        self.opcodes = {
            "imm": 0x4000,
            "add": 0x100,
            "stk": 0x8000,
            "stm": 0x2000,
            "ldm": 0x400,
            "cmp": 0x800,
            "jmp": 0x1000,
            "sys": 0x200,
        }

        for opcode in self.opcodes: 
            self.opcodes[opcode] = (self.opcodes[opcode] >> self.instr_struct["opcode"] & 0xff)





    def interpret_intstruction(self, base_addr: c_size_t, instr: c_uint): 
        instr = instr.value & 0xffffff

        opcode = (instr >> self.instr_struct['opcode']) & 0xff
        arg1 = (instr >> self.instr_struct['arg1']) & 0xff
        arg2 = (instr >> self.instr_struct['arg2']) & 0xff

        if((opcode & self.instructions['imm']) != 0): 
            print("imm", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['add']) != 0): 
            print("add", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['stk']) != 0): 
            print("stk", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['stm']) != 0): 
            print("stm", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['ldm']) != 0): 
            print("ldm", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['cmp']) != 0): 
            print("cmp", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['jmp']) != 0): 
            print("jmp", hex(opcode), hex(arg1), hex(arg2))
        if((opcode & self.instructions['sys']) != 0): 
            print("sys", hex(opcode), hex(arg1), hex(arg2))
        
    def interpret_loop(self): 
        print("[+] Starting interpreter loop! Good Luck!")
        while True: 
            ip = c_ubyte.from_address(self.memory_address.value + 0x405)
            ip_val = ip.value
            if ip_val == 0xff: 
                break
            ip.value = ip_val + 1
            self.interpret_intstruction(
                self.memory_address,
                c_uint.from_address(self.memory_address.value + (ip_val * 3))
            )




if __name__ == "__main__": 
    asm = Assembler()

    vm_code = b'\x01\x2f\x40\x10\x00\x40\x10\x01\x20\x01\x66\x40\x10\x01\x40\x10\x01\x20\x01\x6c\x40\x10\x02\x40\x10\x01\x20\x01\x61\x40\x10\x03\x40\x10\x01\x20\x01\x67\x40\x10\x04\x40\x10\x01\x20\x01\x00\x40\x10\x05\x40\x10\x01\x20\x02\x00\x40\x10\x00\x40\x02\x02\x02\x40\x64\x40\x20\x40\x02\x02\x01\x40\x01\x40\x02\x08\x42\x02'

    for i in range(len(vm_code)): 
        asm.memory[i] = (c_byte)(vmcode[i])

    asm.interpret_loop()
