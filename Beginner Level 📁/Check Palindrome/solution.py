n = int(input("Enter an integer: "))
original = n
reversed = 0

while n != 0:
    remainder = n % 10
    reversed = reversed * 10 + remainder
    n //= 10

if original == reversed:
    print(f"{original} is a palindrome.")
else:
    print(f"{original} is not a palindrome.")
