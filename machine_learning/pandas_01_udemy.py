#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Nov  1 15:00:03 2021

@author: yashlad
"""
'''PANDAS'''
import pandas as pd

age = pd.Series([10,20,30,40,50,60,70], index=['age1','age2','age3','age4','age5', 'age6', 'age7'])

age.age3

filter_age = age[age>20]

age.values
# calling indices of series
age.index

age.index = ['a1', 'a2', 'a3', 'a4', 'a5', 'a6', 'a7']

'''DATAFRAMES'''
import numpy as np

DF = np.array([[20,10,8], [25,8,10], [27, 5, 3], [30, 9, 7]])

Data_set = pd.DataFrame(DF)

Data_set = pd.DataFrame(DF, index = ['S1','S2','S3','S4'])

Data_set = pd.DataFrame(DF, index = ['S1','S2','S3','S4'], columns=['Age', 'Grade-1', 'Grade-2'])

Data_set['Grade-3'] = [4, 7, 8, 10]

Data_set.loc['S2']
