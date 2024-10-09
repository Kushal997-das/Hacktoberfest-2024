#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<string>> ans;

    bool isValid(vector<string>& board, int row, int col) {
        int x = row, y = col;
        
        // Check upper left diagonal
        while (x >= 0 && y >= 0) {
            if (board[x][y] == 'Q') return false;
            x--; y--;
        }

        // Check column
        x = row;
        while (x >= 0) {
            if (board[x][col] == 'Q') return false;
            x--;
        }

        // Check upper right diagonal
        x = row; y = col;
        while (x >= 0 && y < board.size()) {
            if (board[x][y] == 'Q') return false;
            x--; y++;
        }

        return true;
    }

    void solve(int n, vector<string>& board, int row, int queensPlaced) {
        if (n == queensPlaced) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (isValid(board, row, col)) {
                board[row][col] = 'Q';
                solve(n, board, row + 1, queensPlaced + 1);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        solve(n, board, 0, 0);
        return ans;
    }
};

int main() {
    Solution sol;
    int n = 4;

    // Solve for n = 4
    vector<vector<string>> solutions = sol.solveNQueens(n);

    // Output results
    cout << "Total number of solutions: " << solutions.size() << "\n";
    for (int i = 0; i < solutions.size(); i++) {
        cout << "Solution " << i + 1 << ":\n";
        for (const string& row : solutions[i]) {
            cout << row << "\n";
        }
        cout << "\n";
    }

    return 0;
}
