# coding=gbk
# 4.1猜数游戏。在程序中预设一个0~9之间的整数，让用户通过键盘输入所猜的数，
# 如果大于预设的数，显示“遗憾，太大了”、小于预设的数，显示“遗憾，太小了”，
# 如此循环，直至猜中该数，显示“预测N次，你猜中了!”，其中N是用户输入数字的次数。
import random
num = random.randint(0, 9)
guess = eval(input("输入一个整数:"))
times = 0
while True:
    times += 1
    if guess > num:
        print("遗憾，太大了，请重新输入:", end='')
        guess = eval(input())
    elif guess < num:
        print("遗憾，太小了，请重新输入:", end='')
        guess = eval(input())
    elif guess == num:
        print("预测{}次，你猜中了!".format(times))
        break
