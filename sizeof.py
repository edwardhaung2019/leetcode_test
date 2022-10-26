#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Oct 27 02:26:38 2022

@author: huangliangcheng
"""


import random as ran
import numpy as np


sys=["64bit","32bit"]
typeof=["char","unsigned char","signed char","int","short","long","long int","signed int","unsigned int","unsigned long int","long long int","unsigned long long","float","double","long double","void*","char *","int *","long *","long long *","float *","double *"]
size1=[1,1,1,4,2,8,8,4,4,8,8,8,4,8,16,8,8,8,8,8,8,8]
size2=[1,1,1,4,2,4,4,4,4,4,8,8,4,8,8,4,4,4,4,4,4,4]


dic=np.array((typeof,size1,size2))

cho =ran.choice(typeof)
index=typeof.index(cho)
print("what is the size of  \""+'\033[91m'+cho+'\033[0m'+"\" ?")

check=int(input('\033[93m'+"in 64bit:"+'\033[0m'))


while check!=size1[index]:

    print("u r wrong")
    check=int(input("plz input again:"))
    
check=int(input("Right!! \nand in "+'\033[92m'+"32bit:"+'\033[0m')   ) 

while check!=size2[index]:
    print("u r wrong")
    check=int(input("plz input again:"))

print("FINISH")