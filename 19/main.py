# problem_19.py
import datetime

sundays = 0
for year in range(1901, 2001):
    for month in range(1, 13):
        if datetime.date(year, month, 1).weekday() == 6:  #6 = sunday
            sundays += 1

print(f"Number of Sundays that fell on the first day of the month during the 20th century: {sundays}")
