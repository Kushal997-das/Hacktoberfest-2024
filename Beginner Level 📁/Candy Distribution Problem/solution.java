public class solution {
    public static int candyDistribution(int[] ratings) {
        int n = ratings.length;
        int[] candies = new int[n];
        
        // Initialize each child with 1 candy
        for (int i = 0; i < n; i++) {
            candies[i] = 1;
        }
        
        // Traverse from left to right
        for (int i = 1; i < n; i++) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }
        
        // Calculate the total number of candies
        int totalCandies = 0;
        for (int candy : candies) {
            totalCandies += candy;
        }
        
        return totalCandies;
    }

    public static void main(String[] args) {
        int[] ratings = {1, 2, 2, 1, 3};
        int totalCandies = candyDistribution(ratings);
        System.out.println("Minimum number of candies required: " + totalCandies);
    }
}