#coding=gbk
string = input("����һ���ַ���:")
number, letter, space, other = 0, 0, 0, 0
for i in string:
    if i.isdigit():
        number += 1
    elif i.isalpha():
        letter += 1
    elif i.isspace():
        space += 1
    else:
        other += 1
print("����={}".format(number))
print("�ַ�={}".format(letter))
print("�ո�={}".format(space))
print("����={}".format(other))