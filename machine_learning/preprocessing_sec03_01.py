#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Nov 16 22:20:52 2021

@author: yashlad
"""

'''

DATA PREPROCESSING - 01
Udemy-AI/ML
Section - 03

'''
import pandas as pd

Data_set1 = pd.read_csv('Data_Set.csv')

# specifying header below:
Data_set2 = pd.read_csv('Data_Set.csv', header=2)

# renaming column name:
Data_set3 = Data_set2.rename(columns={'Temperature': 'Temp'})

# deleting a column:
Data_set4 = Data_set3.drop('No. Occupants', axis=1)

Data_set3.drop('No. Occupants', axis=1, inplace=True)

# deleting a row:
Data_set5 = Data_set4.drop(2, axis=0)

# reseting the index:
Data_set6 = Data_set5.reset_index(drop=True, )

# drop=True to remove the previous index


##############################################################


# .describe() used to get mean,std..etc:
Data_set6.describe()

# abnormality in dataset - E_heat has value -4 
# we need to remove this:

min_item = Data_set6['E_Heat'].min()  # .min() finds the min no. in the specified col

Data_set6['E_Heat'][Data_set6['E_Heat'] == min_item]

# go to col E_heat , in e_Heat col go and give the min. item

Data_set6['E_Heat'].replace(-4, 21, inplace=True)

# .replace()- 1st value the number to replace, 2nd value the number to replace the value

################################################################

# covariance: 

Data_set6.cov()

print(Data_set6)
