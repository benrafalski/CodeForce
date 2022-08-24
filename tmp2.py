#!/usr/bin/python3
from pwn import *


# s = '[TEST] CHALLENGE! Please send the solution for: 801'

# print(s.replace(s[0:48], ''))


s = '[INFO] This challenge will now perform a bunch of checks.\n[INFO] If you pass these checks, you will receive the flag.\n[TEST] This is a network server. Trying to determine the client process...\n[TEST] Performing tests on the client process!\n[TEST] Checking to make sure that the process is a custom binary that you created by compiling a C program\nTEST] that you wrote. Make sure your C program has a function called \'pwncollege\' in it --- otherwise,\n[TEST] it won\'t pass the checks.\n[INFO] The executable that we are checking is: /home/hacker/a.out.\n[GOOD] You have passed the checks on the client process!\n[INFO] This program will send you 5 mathematical challenges that you will need to compute responses for.\n[TEST] CHALLENGE! Please send the solution for: '
print(len(s))