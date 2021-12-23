'''RANDOM FOREST REGRESSION:-'''

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

from sklearn.ensemble import RandomForestRegressor

random_for_re = RandomForestRegressor(n_estimators=10000, max_depth=20, random_state=33)

random_for_re.fit(x_train, y_train)

predicted_val_rf = random_for_re.predict(x_test)

#reshaping data:
predicted_val_rf = predicted_val_rf.reshape(-1,1)
# inversing data:
predicted_val_rf = sc.inverse_transform(predicted_val_rf)

from sklearn.metrics import r2_score

R2 = r2_score(y_test, predicted_val_rf)
print(R2)