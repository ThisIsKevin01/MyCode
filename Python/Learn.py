#coding=gbk
# e3.4 DayDayUp365.py
dayup, dayfactor = 1.0, 0.01
for i in range(365):
    if i % 7 in [6, 0]:
        dayup = dayup * (1 - dayfactor)
    else:
        dayup = dayup * (1 + dayfactor)
print("����5������2�������:{:.2f}.".format(dayup))
