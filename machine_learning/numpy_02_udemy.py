#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Oct 30 23:08:19 2021

@author: yashlad
"""

import numpy as np 
nump_array=np.array([[1,21,33],[4,5,61]])

ND = np.random.standard_normal((3,4))

UD = np.random.uniform(1, 12,(3,4))


data_N = np.array([1,3,5.122,7,9])

data_Mean = np.mean(data_N)

data_Median = np.median(data_N)

data_var = np.var(data_N)    # variance

data_std = np.std(data_N)   # standard deviation

'''in case of 2d array'''


var_2d = np.var(nump_array, axis=1)  # axis = 1 is rows

var_2d_02 = np.var(nump_array, axis=0)  # axis = 0 is columns
