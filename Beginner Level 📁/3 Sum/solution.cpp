#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    set<vector<int>> temp; // Set to avoid duplicate triplets
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            if (nums[i] + nums[j] + nums[k] == 0)
            {
                temp.insert({nums[i], nums[j], nums[k]});
                j++;
                k--;
            }
            else if (nums[i] + nums[j] + nums[k] < 0)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    // Transfer the set contents to a vector for returning
    for (auto i : temp)
    {
        ans.push_back(i);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> nums[i];
    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets with sum zero are:" << endl;
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout<<num<<" ";
        }
        cout << endl;
    }
    return 0;
}
// Given an array nums of n integers, find all unique triplets that sum to zero.

// Constraints: The solution should not return duplicate triplets.

// Example:
// Input: [-1, 0, 1, 2, -1, -4]
// Output: [[-1, 0, 1], [-1, -1, 2]]