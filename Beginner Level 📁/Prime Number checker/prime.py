def is_prime(number):
    # Check if number is less than 2 (prime numbers are greater than 1)
    if number < 2:
        return False
    # Check divisibility from 2 up to the square root of the number
    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False
    return True

# Example usage
num = int(input("Enter a number: "))
if is_prime(num):
    print(f"{num} is a prime number.")
else:
    print(f"{num} is not a prime number.")
