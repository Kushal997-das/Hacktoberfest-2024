#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &nums){
    int n = nums.size();
    vector<int> maxL(n, 0);
    vector<int> maxR(n, 0);
    int mx = 0;
    for (int i = 0; i < n; i++){
        mx = max(mx, nums[i]);
        maxL[i] = mx;
    }
    mx = 0;
    for (int i = n - 1; i >= 0; i--){
        mx = max(mx, nums[i]);
        maxR[i] = mx;
    }
    int captured = 0;
    for (int i = 0; i < n; i++){
        int mn = min(maxL[i], maxR[i]);
        int diff = mn - nums[i];
        if (diff > 0)
            captured += diff;
    }
    return captured;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }
    int ans = trap(nums);
    cout<<ans<<endl;
    return 0;
}