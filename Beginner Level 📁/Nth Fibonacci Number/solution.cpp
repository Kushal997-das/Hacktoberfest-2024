/*

Question:Given a positive integer n, the task is to find the nth Fibonacci number.
Input: n = 5
Output: 5
Explanation: 5 is the 5th number of Fibonacci series.

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  if (n == 0) {
    cout << 0;
  } else if (n == 1) {
    cout << 0 << " " << 1 << "\n";
  } else {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    for (int i = 0; i <= n; i++) {
      cout << fib[i] << " ";
    }
  }
}

/*

Time Complexity: O(n)+O(n), for calculating and printing the Fibonacci series.

Space Complexity: O(n), for storing Fibonacci series.

*/