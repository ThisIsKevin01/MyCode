# coding=gbk
import time
scale = 50
print("ִ�п�ʼ".center(scale//2, '-'))
t = time.perf_counter()
for i in range(scale + 1):
    a = '*' * i
    b = '.' * (scale - i)
    c = (i / scale) * 100
    t -= time.perf_counter()
    print("\r{:^3.0f}%[{}->{}]{:.2f}s".format(c, a, b, -t),end=' ')
    time.sleep(0.05)
print("\n" + "ִ�н���".center(scale // 2, '-'))
