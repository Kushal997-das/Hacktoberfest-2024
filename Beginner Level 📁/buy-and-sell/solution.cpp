#include<iostream>
using namespace std;

int maxProfit(int prices[], int n) {
    int buy = prices[0];
    int profit = 0;
    
    for (int i = 1; i < n; i++) {
        if (prices[i] > buy) {
            profit = max(profit, prices[i] - buy);
        }
        buy = min(buy, prices[i]);
    }
    return profit;
}

int main() {
    int n;
    cout << "Enter the number of days: ";
    cin >> n;  // Get the number of price points

    int prices[n];
    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int ans = maxProfit(prices, n);
    cout << "Maximum profit is " << ans << endl;

    return 0;
}
