# coding=gbk
# 4.1������Ϸ���ڳ�����Ԥ��һ��0~9֮������������û�ͨ�������������µ�����
# �������Ԥ���������ʾ���ź���̫���ˡ���С��Ԥ���������ʾ���ź���̫С�ˡ���
# ���ѭ����ֱ�����и�������ʾ��Ԥ��N�Σ��������!��������N���û��������ֵĴ�����
import random
num = random.randint(0, 9)
guess = eval(input("����һ������:"))
times = 0
while True:
    times += 1
    if guess > num:
        print("�ź���̫���ˣ�����������:", end='')
        guess = eval(input())
    elif guess < num:
        print("�ź���̫С�ˣ�����������:", end='')
        guess = eval(input())
    elif guess == num:
        print("Ԥ��{}�Σ��������!".format(times))
        break
