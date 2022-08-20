#!/usr/bin/python3
from pwn import *


p=process('./out', stdout=open('/mnt/c/Users/benrafalski/Documents/Programs/CodeForce/t', 'w'))
while(1):
        print(p.readline())

p.close()