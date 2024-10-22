c0 = int(input("Enter an integer and non-zero number: "))
steps = 0
while c0 != 1:
    if c0%2 ==0:
        c0 = c0/2
        steps += 1
    elif c0%2 !=0:
        c0= (3*c0) + 1
        steps += 1
    print(int(c0))
print("steps =", steps)