#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<int> arrayRankTransform(vector<int>& arr) {
    // Step 1: Create a sorted copy of the array
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    // Step 2: Create a map to store ranks
    unordered_map<int, int> rankMap;
    int rank = 1;

    // Step 3: Assign ranks to unique elements
    for (int num : sortedArr) {
        if (rankMap.find(num) == rankMap.end()) {
            rankMap[num] = rank++;
        }
    }

    // Step 4: Replace each element in the original array with its rank
    for (int& num : arr) {
        num = rankMap[num];
    }

    return arr;
}

int main() {
    vector<int> arr = {40, 10, 20, 30};
    vector<int> rankedArr = arrayRankTransform(arr);

    // Output the ranked array
    for (int rank : rankedArr) {
        cout << rank << " ";
    }
    cout << endl;

    return 0;
}
