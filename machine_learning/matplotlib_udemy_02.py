'''VISUALISATION IN MATPLOTLIB - 02'''

import matplotlib.pyplot as plt

import numpy as np

import pandas as pd

month = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']

cust1 = [12,13,9,8,7,8,8,7,6,5,8,10]
cust2 = [14,16,11,7,6,6,7,6,5,8,9,12]

plt.plot(month, cust1, color = 'lime', marker="d", label="Customer-1")
plt.xlabel("Months--->")

plt.plot(month, cust2, color = 'red', marker="1", label="Customer-2")
plt.ylabel('Electricity Consumption--->')

plt.title('Building Consumption')

plt.legend(loc='upper center')
plt.show()

#############################################

'''MAKING SUBPLOTS: '''

plt.subplot(1,2,1) 
plt.plot(month, cust1, color = 'lime', label="Customer-1")
plt.xlabel("Months--->")
plt.ylabel('Electricity Consumption--->')
plt.title('Building Consumption-01')
plt.show()

plt.subplot(1,2,2)   
plt.plot(month, cust2, color = 'red', label="Customer-2")
plt.xlabel("Months--->")
plt.ylabel('Electricity Consumption--->')
plt.title('Building Consumption-02')
plt.show()

'''SCATTER PLOT'''

plt.scatter(month, cust1, color='red', label='Customer-1')
plt.scatter(month, cust2, color='blue', label='Customer-2')
plt.xlabel('Month')
plt.ylabel('Electricity Consumption')
plt.title('Scatter Plot of Building Consumption')
plt.grid()
plt.legend(loc='best')
plt.show()

'''HISTOGRAM'''

plt.hist(cust1, bins=20, color='green')
plt.xlabel('Months--->')
plt.ylabel('Electricity Consumption--->')
plt.title('Histogram')
plt.show()

'''BAR CHART'''

plt.bar(month, cust1, width=0.8, color='b')
plt.show()

plt.bar(month, cust1, color='red', label='Customer-1')
plt.bar(month, cust2, color='blue', label='Customer-2')
plt.xlabel('Month')
plt.ylabel('Electricity Consumption')
plt.title('Bar chart of Building Consumption')
#plt.grid()
plt.legend(loc='best')
plt.show()

bar_width = 0.4
month_num = np.arange(12)

plt.bar(month_num, cust1, bar_width, color='cyan', label='Customer-01')

plt.bar(month_num+bar_width, cust2, bar_width, color='pink', label='Customer-02')

plt.xlabel('Month')
plt.ylabel('Electricity Consumption')
plt.title('Bar chart of Building Consumption')
#plt.grid()
plt.legend(loc='best')
plt.show()

plt.xticks(month_num + (bar_width)/12, ('Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'))

plt.boxplot(cust1, notch=False, vert=True)
plt.boxplot([cust1, cust2], patch_artist=True, 
            boxprops=dict(facecolor='red', color='red'), 
            whiskerprops=dict(color='blue'),
            capprops=dict(color='green'),
            medianprops=dict(color='yellow'))
plt.show()