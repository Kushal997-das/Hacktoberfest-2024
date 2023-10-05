#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array : " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    selectionSort(arr, size);

    cout << "Sorted array : " << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
