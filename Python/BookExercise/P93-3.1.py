#coding=gbk
weight = 60
g = 10
for i in range(10):
    weight += 0.5
    G_earth = weight * g
    G_moon = G_earth * 0.165
    print("第",i,"年地球的重力:",G_earth)
    print("第",i,"年月球的重力:",G_moon)