#include <iostream>
using namespace std;

// Function to reverse an array from index start to end
void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Function to rotate the array to the left by d positions using the reversal algorithm
void rotateArray(int arr[], int d, int n) {
    // Step 1: Reverse the first 'd' elements
    reverseArray(arr, 0, d-1);
    
    // Step 2: Reverse the remaining 'n-d' elements
    reverseArray(arr, d, n-1);
    
    // Step 3: Reverse the entire array
    reverseArray(arr, 0, n-1);
}

// Utility function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    
    // Rotate the array by 'd' positions
    rotateArray(arr, d, n);
    
    // Print the rotated array
    cout << "Rotated array: ";
    printArray(arr, n);
    
    return 0;
}
