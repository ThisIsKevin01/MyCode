# coding=gbk
# e6.1CalPi.py
from random import random
from math import sqrt
from time import perf_counter
DARTS = 2 ** 25
hits = 0.0
perf_counter()
for i in range(1, DARTS + 1):
    x, y = random(), random()
    dist = sqrt(x ** 2 + y ** 2)
    if dist <= 1.0:
        hits = hits + 1
pi = 4 * (hits / DARTS)
print("Piֵ��{}.".format(pi))
print("����ʱ����:{:.5f}s".format(perf_counter()))