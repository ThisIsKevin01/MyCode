#coding=gbk
#e5.1CalBMI.py
height, weight = eval(input("���������(��)������\(����)[���Ÿ���]:"))
bmi = weight / pow(height, 2)
print("BMI��ֵΪ:{:.2f}".format(bmi))
whi, dom = "", ""
if bmi < 18.5:
    who = "ƫ��"
elif bmi < 25:
    who = "����"
elif bmi <30:
    who = "ƫ��"
else:
    who = "����"
print("BMIָ��Ϊ:����{0}".format(who))