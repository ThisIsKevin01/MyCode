#coding=gbk
Totalcent=eval(input("������Ǯ��(��):"))
Money=[5000,2000,1000,500,200,100,50,20,10,5,2,1]
Change,StrPrint=[],[],
Word=['50Ԫ','20Ԫ','10Ԫ','5Ԫ','2Ԫ','1Ԫ','5��','2��','1��','5��','2��','1��']
for i in range(0,12):
    if Totalcent//Money[i]>0:
        Change.append(Totalcent//Money[i])
        StrPrint.append(Word[i])
        Totalcent=Totalcent%Money[i]
print('���������:',end='')
for i in range(0,len(Change)):
    print('{}��{},'.format(Change[i],StrPrint[i]),end='')
