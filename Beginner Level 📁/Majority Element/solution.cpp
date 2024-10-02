#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int el;

        // Step 1: Find a candidate for majority element
        for(int i = 0; i < n; i++) {
            if(cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if(nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // Step 2: Verify if the candidate is actually a majority element
        cnt = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == el) {
                cnt++;
            }
        }

        // If the count is more than n/2, return the majority element
        if(cnt > n / 2) {
            return el;
        }

        // Otherwise, return -1 (no majority element)
        return -1;
    }
};

int main() {
    Solution solution;
    vector<int> nums;

    // Example input
    cout << "Enter the number of elements: ";
    int size;
    cin >> size;

    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    // Find and print the majority element
    int result = solution.majorityElement(nums);
    if(result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "There is no majority element." << endl;
    }

    return 0;
}