# Function to calculate factorial
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

# user input 
num = int(input("Enter a number: "))

# Check for negative input
if num < 0:
    print("Factorial is not defined for negative numbers.")
else:
    # Call the factorial function and display the result
    print(f"Factorial of {num} = {factorial(num)}")
