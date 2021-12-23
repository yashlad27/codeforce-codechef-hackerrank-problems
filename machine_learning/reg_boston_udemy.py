from sklearn.datasets import load_boston

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

boston_pre = load_boston()

x=boston_pre.data
y=boston_pre.target

from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(x,y,test_size=0.25, train_size=0.75, 
                                                    random_state=76)

from sklearn.preprocessing import MinMaxScaler

sc = MinMaxScaler(feature_range=(0,1))

x_train = sc.fit_transform(x_train)
x_test = sc.fit_transform(x_test)

y_train = y_train.reshape(-1,1)
y_train=sc.fit_transform(y_train)


'''MLR'''

from sklearn.linear_model import LinearRegression

Linear_Re = LinearRegression()

# fit data to linear_re

Linear_Re.fit(x_train, y_train)

# model ready to predict:---

predicted_values_MLR = Linear_Re.predict(x_test)

# changing normalised values in x_test back to original values

predicted_values_MLR = sc.inverse_transform(predicted_values_MLR)

'''EVALUATION METRICS'''

from sklearn.metrics import mean_absolute_error
from sklearn.metrics import mean_squared_error
from sklearn.metrics import r2_score

import math

MAE = mean_absolute_error(y_test, predicted_values_MLR)
print(MAE)

MSE = mean_squared_error(y_test, predicted_values_MLR)
print(MSE)

RSME = math.sqrt(MSE)
print(RSME)

R2 = r2_score(y_test, predicted_values_MLR)
print(R2)

def mean_abs_percentage_error(y_true, y_pred):
    y_true, y_pred = np.array(y_true), np.array(y_pred)
    return np.mean(np.abs((y_true-y_pred)/y_true)) * 100

MAPE = mean_abs_percentage_error(y_test, predicted_values_MLR)
print(MAPE)

'''PLR'''
from sklearn.datasets import load_boston

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt


boston_pre = load_boston()

# ROOMS v/s price of building

x = boston_pre.data[:,5]
y = boston_pre.target

from sklearn.model_selection import train_test_split

x_train, x_test, y_train, y_test = train_test_split(x,y,test_size=0.25, train_size=0.75, 
                                                    random_state=76)

from sklearn.preprocessing import PolynomialFeatures

poly_p = PolynomialFeatures(degree=2)

x_train = x_train.reshape(-1,1)

poly_x = poly_p.fit_transform(x_train)

from sklearn.linear_model import LinearRegression

Linear_Re = LinearRegression()

poly_lr = Linear_Re.fit(poly_x, y_train)

x_test = x_test.reshape(-1,1)

poly_xt = poly_p.fit_transform(x_test)

predicted_value_poly = poly_lr.predict(poly_xt)

# evaluting the model:--
from sklearn.metrics import r2_score

R2 = r2_score(y_test, predicted_value_poly)
print(R2)




