#coding=gbk
Totalcent=eval(input("输入总钱数(分):"))
Money=[5000,2000,1000,500,200,100,50,20,10,5,2,1]
Change,StrPrint=[],[],
Word=['50元','20元','10元','5元','2元','1元','5角','2角','1角','5分','2分','1分']
for i in range(0,12):
    if Totalcent//Money[i]>0:
        Change.append(Totalcent//Money[i])
        StrPrint.append(Word[i])
        Totalcent=Totalcent%Money[i]
print('可以找零成:',end='')
for i in range(0,len(Change)):
    print('{}张{},'.format(Change[i],StrPrint[i]),end='')
