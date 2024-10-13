num=input("Enter a Number: ")
s=0
for i in num:
    s+=int(i)
show = int(num)%s==0
if show:
    print(num,"is Harshad Number")
else:
    print(num,"is not a Harshad Number")