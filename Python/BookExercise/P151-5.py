# coding=gbk

# 5.1
def WithPlus():
    print("+------+------+------+------+")


def WithoutPlus():
    print("|      |      |      |      |")


def Block():
    for i in range(4):
        WithPlus()
        WithoutPlus()
        WithoutPlus()
    WithPlus()


# 5.2
def isOdd(x):
    print("奇数") if x % 2 else print("偶数")


# 5.3
def isNum(x):
    if x.isdigit():
        print(True)


# 5.4
def multi(a, *b):
    c = 1
    for i in b:
        c *= i
    print(a * c)


# 5.5
def isPrime(x):
    try:
        for i in range(2, (x//2)+1):
            if x // i == 0:
                print(False)
                break
            else:
                print(True)
                break
    except TypeError:
        print("数据错误")


# 5.7
def move(n, a, buffer, c):
    if(n == 1):
        print(a, "->", c)
        return
    move(n-1, a, c, buffer)
    move(1, a, buffer, c)
    move(n-1, buffer, a, c)


move(5, "a", "b", "c")
