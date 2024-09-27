import java.util.Scanner;
public class FactorialLoop {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int sum = 1;
    int n = sc.nextInt() ;
    for( int i = n; i>0; i--){
      sum *= i;
    }
    System.out.println("The factorial of "+ n + " is "+ sum);
  }
}
