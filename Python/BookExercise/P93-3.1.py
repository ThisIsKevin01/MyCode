#coding=gbk
weight = 60
g = 10
for i in range(10):
    weight += 0.5
    G_earth = weight * g
    G_moon = G_earth * 0.165
    print("��",i,"����������:",G_earth)
    print("��",i,"�����������:",G_moon)