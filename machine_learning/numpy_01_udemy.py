#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Oct 26 10:59:15 2021

@author: yashlad
"""

'''NumpPy coding'''

import numpy as np

nump_array=np.array([[1,2,3],[4,5,6]])

np1=np.array([[7,9],[10,3]])

np2 = np.array([[4,5],[1,3]])

"""numpy array muktiplication"""

mnp1 = np1 @ np2  # muliplying two arrays 

# above was row-column multiplication

mnp2 = np1 * np2  # multiplying each element of array

mnp3 = np.dot(np1,np2)  # similar to @ sign

mnp4 = np.multiply(np1,np2)  #similar to * sign

'''addition and subtraction in numpy of array'''

sum1 = np1 + np2  

sub1 = np1 - np2

# now using different classes in numpy

sub2 = np.subtract(np1,np2)

np.sum(np1)

broad_nump = np1 + 3   # adding 3 to each element in array

np3 = np.array([[3,4]])

np1 + np3

'''divison'''

D = np.divide([12,40,15], 5)

'or'

d = np.floor_divide([12, 33, 55], 6)

sq = np.math.sqrt(121)

nd = np.random.standard_normal((3,4))

random_array = np.random.randint(1, 50, (2,5))

ze = np.zeros((3,4))

one = np.ones((3,4))


filter_Ar = np.logical_and(random_array>30, random_array<50)
F_Random_Ar = random_array[filter_Ar]
