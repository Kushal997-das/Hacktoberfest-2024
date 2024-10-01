//number of days in a month
import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a month number of your choice (between 1 to 12): ");
        int m = sc.nextInt(); //here "m" refers to month
        int n; // here "n" refers to number of days
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
		    n = 31; //jan, mar, may, july, aug, oct, dec
		}
		else if(m == 2) {
		    n = 28; //feb
		}
		else 
			n = 30; //rest months i.e apr, june, sep, nov
		
		System.out.println ("Number of days in this particular month: ");
	System.out.println(n);
    }
}

/*
// Output:
Enter a month number of your choice (between 1 to 12): 
3
Number of days in this particular month: 
31
*/
