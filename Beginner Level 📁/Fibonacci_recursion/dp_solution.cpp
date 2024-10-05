#include <bits/stdc++.h>
using namespace std;

vector<int> dp(1000, -1);

int Fibonacci(int n) {
   
    if (n <= 1)
        return n;

  // here we pre check to avoid exponential time complexity.
    if (dp[n] != -1)
        return dp[n];
    
    dp[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    
    return dp[n];
}

int main() {
    int n = 9;
    cout << Fibonacci(n);
    return 0;
}
