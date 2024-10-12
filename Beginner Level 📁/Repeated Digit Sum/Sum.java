import java.util.*;

public class Sum {

    public static int repetedDigitSum(int num) {

        while (num > 9) {

            int sum = 0;

            while (num != 0) {
                int rem = num % 10;
                sum += rem;
                num /= 10;
            }

            num = sum;
        }

        return num;
    }

    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.println("Repeted Sum of digits: " + repetedDigitSum(num));
        sc.close();
    }

}
