#coding=gbk
string = input("输入一串字符串:")
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
print("数字={}".format(number))
print("字符={}".format(letter))
print("空格={}".format(space))
print("其他={}".format(other))