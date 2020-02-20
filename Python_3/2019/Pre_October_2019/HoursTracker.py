import os
import datetime
import pandas as pd

day = datetime.datetime.today()
day = day.weekday()

path = os.path.join('Documents', 'CWE', 'Timesheets', '2019', 'September October.xlsx')
file = pd.read_excel(path)