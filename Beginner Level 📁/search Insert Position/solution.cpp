#include<bits/stdc++.h>
using namespace std;

int searchInsertPosition(vector<int> arr, int target) {
    int n = arr.size();
    int l = 0;
    int h = n - 1;
    int ans = n;
    while (l <= h) {
        int mid = (l + h) / 2;
        if (arr[mid] <= target) {  
            l = mid + 1;
        }
        else {
            ans = mid; 
            h = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> a = {1, 3, 4, 5, 6};
    int t = 2;
    cout << searchInsertPosition(a, t);
}
