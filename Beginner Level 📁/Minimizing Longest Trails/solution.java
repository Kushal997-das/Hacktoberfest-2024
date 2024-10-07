import java.util.*;

public class solution {

    public static int efficientTrek(List<Integer> trails, int record) {
        int sum = 0;

        // Loop through the first `record - 1` trails, summing them up
        for (int i = 0; i < record - 1; i++) {
            sum += trails.get(i); // Add the first `record - 1` trails to the sum
        }

        // Calculate the maximum trail for the remaining days
        int max = 0;
        for (int i = record - 1; i < trails.size(); i++) {
            max = Math.max(max, trails.get(i)); // Find the maximum trail for the remaining part
        }

        sum += max;

        return sum;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the number of trails
        System.out.println("Enter the number of trails:");
        int n = sc.nextInt();

        // Input the trail lengths
        List<Integer> trails = new ArrayList<>();
        System.out.println("Enter the trail lengths:");
        for (int i = 0; i < n; i++) {
            trails.add(sc.nextInt());
        }

        // Input the number of days (record)
        System.out.println("Enter the number of days (record):");
        int record = sc.nextInt();

        // Calculate and print the result
        int result = efficientTrek(trails, record);
        System.out.println("Minimum sum of the longest trails on each day: " + result);
    }
}
