
public class findCount {
    public static void main(String[] args) {
        String word = "AQ";
        System.out.println(getDistance(word)); // Expected output: 2
    }

    public static int getDistance(String word) {
        int totalDistance = 0;
        char currentPos = 'Q'; // Starting position is 'Q'
        for (int i = 0; i < word.length(); i++) {
            char nextPos = word.charAt(i);
            int distance = getManhattanDistance(currentPos, nextPos);
            System.out.println("Moving from " + currentPos + " to " + nextPos + " with distance " + distance);
            totalDistance += distance;
            currentPos = nextPos; // Update current position
        }
        return totalDistance;
    }
    public static int[] getPosition(char ch) {
        char[][] kb = {
                {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'},
                {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'},
                {'Z', 'X', 'C', 'V', 'B', 'N', 'M'}
        };
        for (int i = 0; i < kb.length; i++) {
            for (int j = 0; j < kb[i].length; j++) {
                if (kb[i][j] == ch) {
                    return new int[]{i, j};
                }
            }
        }
        return null;
    }

    public static int getManhattanDistance(char ch1, char ch2) {
        int[] pos1 = getPosition(ch1);
        int[] pos2 = getPosition(ch2);
        if (pos1 != null && pos2 != null) {
            return Math.abs(pos1[0] - pos2[0]) + Math.abs(pos1[1] - pos2[1]);
        }
        return 0;
    }
}
