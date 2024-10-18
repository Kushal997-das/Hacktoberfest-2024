#include <iostream>
#include <cmath> // for pow() function

using namespace std;

bool isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    // Find the number of digits
    while (number != 0) {
        digits++;
        number /= 10;
    }

    number = originalNumber; // Reset the number to the original value

    // Calculate the sum of the digits raised to the power of the number of digits
    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, digits);
        number /= 10;
    }

    // Check if the sum equals the original number
    return (sum == originalNumber);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}