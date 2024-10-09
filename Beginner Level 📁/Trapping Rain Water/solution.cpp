#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the total amount of trapped rainwater
int trapRainWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0; // If no bars, no water can be trapped

    vector<int> leftMax(n), rightMax(n);

    // Fill leftMax array - max height to the left of each bar
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i]);
    }

    // Fill rightMax array - max height to the right of each bar
    rightMax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i]);
    }

    // Calculate trapped water by finding the minimum of leftMax and rightMax for each bar
    int trappedWater = 0;
    for (int i = 0; i < n; i++) {
        trappedWater += min(leftMax[i], rightMax[i]) - height[i];
    }

    return trappedWater;
}

int main() {
    // Example input array representing the height of bars
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

    // Call the trapRainWater function and display the result
    cout << "Trapped Rain Water: " << trapRainWater(height) << endl;

    return 0;
}
