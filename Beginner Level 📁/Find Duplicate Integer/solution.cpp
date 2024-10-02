#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            if (map.find(nums[i]) != map.end()) {
                return nums[i];
            }
            map[nums[i]]++;
        }
        return -1; 
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 3, 4, 2, 2}; 
    int duplicate = solution.findDuplicate(nums);
    
    cout << "The duplicate number is: " << duplicate << endl; 
    return 0;
}
