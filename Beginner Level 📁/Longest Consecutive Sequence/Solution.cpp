#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> present;
    for (int i = 0; i < nums.size(); i++) {
        present.insert(nums[i]);
    }
    int longest_Consecutive = 0;
    for (int i = 0; i < nums.size(); i++) {
        int current = nums[i] - 1;
        if (present.find(current) == present.end()) {
            int first = nums[i];
            int count = 1;
            while (present.find(first + 1) != present.end()) {
                count++;
                first++;
            }
            longest_Consecutive = max(count, longest_Consecutive);
        }
    }
    return longest_Consecutive;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = longestConsecutive(nums);
    cout << "Length of longest consecutive sequence: " << result << endl;

    return 0;
}
