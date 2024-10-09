
import java.util.ArrayList;
import java.util.List;

public class Solution {
    
    // Main function to solve the N-Queens problem
    public List<List<String>> solveNQueens(int n) {
        // To store all valid solutions
        List<List<String>> result = new ArrayList<>();
        
        // Create an empty chess board
        char[][] chessBoard = new char[n][n];
        
        // Initialize the board with '.' (empty spaces)
        for (int i = 0; i < chessBoard.length; i++) {
            for (int j = 0; j < chessBoard.length; j++) {
                chessBoard[i][j] = '.';
            }
        }
        
        // Start solving from the first row
        solveNQueensUtil(chessBoard, 0, result);

        return result;
    }
    
    // Utility function to solve the N-Queens problem recursively
    private void solveNQueensUtil(char[][] chessBoard, int currentRow, List<List<String>> result) {
        // Base case: if all rows are filled, we have a valid solution
        if (currentRow == chessBoard.length) {
            result.add(createSolutionList(chessBoard));
            return;
        }
        
        // Try placing a queen in every column of the current row
        for (int col = 0; col < chessBoard.length; col++) {
            // Check if it's safe to place the queen
            if (isSafeToPlace(chessBoard, currentRow, col)) {
                chessBoard[currentRow][col] = 'Q';  // Place the queen
                solveNQueensUtil(chessBoard, currentRow + 1, result); // Recur for the next row
                chessBoard[currentRow][col] = '.';  // Backtrack (remove the queen)
            }
        }
    }

    // Function to check if it's safe to place a queen at chessBoard[row][col]
    private boolean isSafeToPlace(char[][] chessBoard, int row, int col) {
        // Check the column above for another queen
        for (int i = row - 1; i >= 0; i--) {
            if (chessBoard[i][col] == 'Q') {
                return false;
            }
        }

        // Check the upper left diagonal for another queen
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (chessBoard[i][j] == 'Q') {
                return false;
            }
        }

        // Check the upper right diagonal for another queen
        for (int i = row - 1, j = col + 1; i >= 0 && j < chessBoard.length; i--, j++) {
            if (chessBoard[i][j] == 'Q') {
                return false;
            }
        }

        // Safe to place the queen
        return true;
    }

    // Helper function to convert the chessBoard into a list of strings for storing the solution
    private List<String> createSolutionList(char[][] chessBoard) {
        List<String> solution = new ArrayList<>();
        for (char[] row : chessBoard) {
            solution.add(new String(row));
        }
        return solution;
    }
}
