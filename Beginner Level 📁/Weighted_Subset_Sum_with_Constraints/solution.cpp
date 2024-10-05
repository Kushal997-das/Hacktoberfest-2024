#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

const int MAXN = 100;  
const int MAXW = 1000; 

int n, W, K;
int w[MAXN], v[MAXN];
vector<pair<int, int>> mustPair, cannotPair;
int dp[MAXN][MAXW][MAXN];
bool selected[MAXN];

int solve(int idx, int weight, int count)
{
    if (idx == n || weight == W || count == K)
    {
        return 0;
    }

    if (dp[idx][weight][count] != -1)
    {
        return dp[idx][weight][count];
    }

    int notTake = solve(idx + 1, weight, count);
    int take = 0;

    // Check if we can take this item
    bool canTake = true;
    for (auto &pair : cannotPair)
    {
        if ((pair.first == idx && selected[pair.second]) ||
            (pair.second == idx && selected[pair.first]))
        {
            canTake = false;
            break;
        }
    }

    if (canTake && weight + w[idx] <= W && count + 1 <= K)
    {
        // Check if we need to take the paired item
        int extraWeight = 0, extraValue = 0;
        for (auto &pair : mustPair)
        {
            if (pair.first == idx && !selected[pair.second])
            {
                extraWeight = w[pair.second];
                extraValue = v[pair.second];
            }
            else if (pair.second == idx && !selected[pair.first])
            {
                extraWeight = w[pair.first];
                extraValue = v[pair.first];
            }
        }

        if (weight + w[idx] + extraWeight <= W && count + 1 + (extraWeight > 0 ? 1 : 0) <= K)
        {
            selected[idx] = true;
            take = v[idx] + extraValue + solve(idx + 1, weight + w[idx] + extraWeight, count + 1 + (extraWeight > 0 ? 1 : 0));
            selected[idx] = false;
        }
    }

    return dp[idx][weight][count] = max(take, notTake);
}

pair<int, vector<int>> weightedSubsetSum()
{
    memset(dp, -1, sizeof(dp));
    memset(selected, false, sizeof(selected));

    int maxValue = solve(0, 0, 0);

    // Backtrack to find the selected items
    vector<int> selectedItems;
    int idx = 0, weight = 0, count = 0;
    while (idx < n && weight < W && count < K)
    {
        int notTake = (idx + 1 < n) ? dp[idx + 1][weight][count] : 0;
        int take = 0;

        bool canTake = true;
        for (auto &pair : cannotPair)
        {
            if ((pair.first == idx && selected[pair.second]) ||
                (pair.second == idx && selected[pair.first]))
            {
                canTake = false;
                break;
            }
        }

        if (canTake && weight + w[idx] <= W && count + 1 <= K)
        {
            int extraWeight = 0, extraValue = 0;
            for (auto &pair : mustPair)
            {
                if (pair.first == idx && !selected[pair.second])
                {
                    extraWeight = w[pair.second];
                    extraValue = v[pair.second];
                }
                else if (pair.second == idx && !selected[pair.first])
                {
                    extraWeight = w[pair.first];
                    extraValue = v[pair.first];
                }
            }

            if (weight + w[idx] + extraWeight <= W && count + 1 + (extraWeight > 0 ? 1 : 0) <= K)
            {
                take = v[idx] + extraValue + dp[idx + 1][weight + w[idx] + extraWeight][count + 1 + (extraWeight > 0 ? 1 : 0)];
            }
        }

        if (take > notTake)
        {
            selectedItems.push_back(idx);
            selected[idx] = true;
            weight += w[idx];
            count++;

            // Add the paired item if necessary
            for (auto &pair : mustPair)
            {
                if (pair.first == idx && !selected[pair.second])
                {
                    selectedItems.push_back(pair.second);
                    selected[pair.second] = true;
                    weight += w[pair.second];
                    count++;
                }
                else if (pair.second == idx && !selected[pair.first])
                {
                    selectedItems.push_back(pair.first);
                    selected[pair.first] = true;
                    weight += w[pair.first];
                    count++;
                }
            }
        }
        idx++;
    }

    return {maxValue, selectedItems};
}

int main()
{
    // Input
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cin >> W >> K;

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        mustPair.push_back({a, b});
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cannotPair.push_back({a, b});
    }

    // Solve
    auto result = weightedSubsetSum();

    // Output
    cout << "Maximum value: " << result.first << endl;
    cout << "Selected items: ";
    for (int item : result.second)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}