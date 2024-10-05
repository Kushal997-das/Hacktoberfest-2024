using System;
class Program
{
    public static void Main()
    {
        int fact, num;
        Console.Write("Enter a number: ");

        // take input from user 
        num = Convert.ToInt32(Console.ReadLine());

        Program obj = new Program();

        // calling recursive function   
        fact = obj.factorial(num);

        Console.WriteLine("Factorial of {0} is {1}", num, fact);
    }

    // recursive function 
    public int factorial(int num)
    {
        if (num == 0)
            return 1;
        else
            // recursive call
            return num * factorial(num - 1);
    }
}