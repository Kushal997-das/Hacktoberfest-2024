#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxArea = 0;

    while (left < right) {
        // Calculate the current area
        int currentHeight = min(height[left], height[right]);
        int currentWidth = right - left;
        int currentArea = currentHeight * currentWidth;

        // Update maxArea if current area is larger
        maxArea = max(maxArea, currentArea);

        // Move the shorter line inward
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}

int main() {
    // Example test case
    vector<int> heights = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum area: " << maxArea(heights) << endl;
    return 0;
}
