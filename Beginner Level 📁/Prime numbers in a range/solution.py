A=int(input())
B=int(input())
if A==1:
    for i in range(A+1,B+1):
        for j in range(2,i):
            if i%j==0:
                break
        else:
            print(i,end=' ')
                
elif A>1:
    for i in range(A,B+1):
        for j in range(2,int(i**(1/2)+1)):
            if i%j==0:
                break
        else:
            print(i,end=' ')

else:
    for i in range(2,B+1):
        for j in range(2,int(i**(1/2)+1)):
            if i%j==0:
                break
        else:
            print(i,end=' ')