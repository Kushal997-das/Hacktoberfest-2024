#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    // Base case: If there's only one disk, move it from source to destination
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary using destination as temporary storage
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move the n-1 disks from auxiliary to destination using source as temporary storage
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int n;  // Number of disks

    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the recursive Tower of Hanoi function
    towerOfHanoi(n, 'A', 'C', 'B');  // A = source, C = destination, B = auxiliary

    return 0;
}
