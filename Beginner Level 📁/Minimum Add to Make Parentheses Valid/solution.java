class Solution {
    public int minAddToMakeValid(String s) {
        int leftParentheses = 0; // Tracks unmatched opening parentheses '('
        int rightParentheses = 0; // Tracks unmatched closing parentheses ')'

        for (char c : s.toCharArray()) {
            if (c == '(') {
                leftParentheses++; // Unmatched '(' found
            } else {
                if (leftParentheses > 0) {
                    leftParentheses--; // A matching '(' is found for ')'
                } else {
                    rightParentheses++; // No matching '(' so this ')' is unmatched
                }
            }
        }
        
        // The total moves required are the unmatched left + unmatched right parentheses
        return leftParentheses + rightParentheses;
    }
}
