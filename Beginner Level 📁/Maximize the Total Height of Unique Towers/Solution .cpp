#include <bits/stdc++.h>

using namespace std;

class Solution 
{
public:
    long long maximumTotalSum(vector<int> &heights) 
    {
        unordered_set<int> used;
        map<int, int> nextAvailable;
        long long totalSum = 0;

        for (int i = 0; i < heights.size(); ++i) 
        {
            int current = heights[i];

            if (used.count(current) == 0) 
            {
                totalSum += current;
                used.insert(current);
            } 
            else 
            {
                int next = current;
                while (used.count(next)) 
                {
                    if (nextAvailable.count(next)) 
                    {
                        next = nextAvailable[next];
                    } 
                    else 
                    {
                        next--;
                    }
                }

                if (next <= 0) 
                {
                    return -1;
                }

                totalSum += next;
                used.insert(next);
                nextAvailable[current] = next - 1;  
            }
        }

        return totalSum;
    }
};

int main() 
{
    vector<int> heights1 = {2, 3, 4, 3};
    Solution sol;
    cout << "Example 1 Output: " << sol.maximumTotalSum(heights1) << endl;

    vector<int> heights2 = {15, 10};
    cout << "Example 2 Output: " << sol.maximumTotalSum(heights2) << endl;

    vector<int> heights3 = {2, 2, 1};
    cout << "Example 3 Output: " << sol.maximumTotalSum(heights3) << endl;

    return 0;
}
