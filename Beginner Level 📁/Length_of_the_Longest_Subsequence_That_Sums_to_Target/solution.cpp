#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(int i, vector<int> &nums, int target, vector<vector<int>> &dp)
    {
        if (target < 0)
            return -1e5;
        if (target == 0)
            return 0;
        if (i == nums.size())
            return -1e5;

        if (dp[i][target] != -1)
            return dp[i][target];
        int take = 1 + helper(i + 1, nums, target - nums[i], dp);
        int notTake = helper(i + 1, nums, target, dp);
        return dp[i][target] = max(take, notTake);
    }
    int lengthOfLongestSubsequence(vector<int> &nums, int target)
    {
        vector<vector<int>> dp(nums.size() + 1, vector<int>(target + 1, -1));
        int ans = helper(0, nums, target, dp);
        if (ans >= -1e5 && ans <= -1e4)
            return -1;
        return ans;
    }
};