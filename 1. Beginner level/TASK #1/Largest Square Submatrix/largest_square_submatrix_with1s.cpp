#include <iostream>
using namespace std;
int mat[101][101];
int dp[101][101];

int solve(int r, int c, int n, int m, int &maxop)
{

    if (dp[r][c] != -1)
    {
        return dp[r][c];
    }

    if (r == 0)
    {
        if (mat[r][c] == 1)
        {
            return dp[r][c] = 1;
        }
        return dp[r][c] = 0;
    }

    if (c == 0)
    {
        if (mat[r][c] == 1)
        {
            return dp[r][c] = 1;
        }
        return dp[r][c] = 0;
    }

    if (mat[r][c] == 0)
    {
        return dp[r][c] = 0;
    }
    int op1 = solve(r - 1, c, n, m, maxop);
    int op2 = solve(r - 1, c - 1, n, m, maxop);
    int op3 = solve(r, c - 1, n, m, maxop);
    int op = min(op1, min(op2, op3)) + 1;
    maxop = max(maxop, op);
    return dp[r][c] = op;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            dp[i][j] = -1;
        }
    }

    int maxop = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            maxop = max(solve(i, j, n, m, maxop), maxop);
        }
    }
    cout << maxop;
}