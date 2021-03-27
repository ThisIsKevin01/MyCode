# coding=gbk
textFile = open("E:\Study\Projects\MyCode\Python\hello.txt", "rt")
print(textFile.readline())
textFile.close()
binFine = open("Python\hello.txt", "rb")
print(binFine.readline())
binFine.close()