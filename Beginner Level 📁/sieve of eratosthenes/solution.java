public class SieveOfEratosthenes {
		//Driver Code
	public static void main(String[] args) {
	
		Scanner input= new Scanner(System.in);
		System.out.println("Enter a number : ");
		int a= input.nextInt();
		System.out.println("The number of primes =");
		int primes = countPrimes(a);
		System.out.println(primes);
		
		

	}
	public static int countPrimes(int n) {
		
		if(n<2) return 0;
		//checking for 0 & 1
		boolean[] composites = new boolean[n];
		//Array of composites --> true represents composites and false represents prime
		int limit = (int)Math.sqrt(n);
		for(int i=2; i<=limit;i++) {
			if(composites[i]==false) {
				//mark all the multiples of i as true.
				//The first index to be flipped to true is i*i
				for(int j= i*i; j<n; j+=i) {
					composites[j]=true;
				}
				
			}
		}
		int count=0;
		for (int i=2;i<n;i++) {
			if(composites[i]==false) {
				count++;
			}
		}
	
		
		return count;
	}

}

// TestCases
//
// #1
//Input = 12
//Expected Output  = 5
//Actual Output = 5

//#2
//Input = 45
//Expected Output  = 14
//Actual Output = 14

//#3
//Input = 5446
//Expected Output  = 720
//Actual Output = 720
