// Given a positive integer N. The task is to find factorial of N.
// Example 1:

// Input:
// N = 4
// Output: 24
// Explanation: 4! = 4 * 3 * 2 * 1 = 24
// Example 2:

// Input:
// N = 13
// Output: 6227020800
// Explanation: 
// 13! = 13 * 12 * .. * 1 = 6227020800

import java.io.*;
import java. util. * ;
class Main {
public static void main(String[] args) {
// taking input using Scanner class
Scanner sc = new Scanner(System.in);
// taking testcases
int T = sc.nextInt();
while(T-->0){
// creating an object of class Factorial
Solution obj = new Solution();
int N;
// taking N
N = sc.nextInt();
N
// calling factorial() method
// of class Factorial
System. out. println(obj . factorial (N) ) ;
}
}
}


class Solution {

    public long factorial(int N) {
        // Your code here
        int temp=1;
        for(int i=2;i<=N;i++){
            temp=temp*i;
        }
            return temp;
        
    }
}

// ........................OR........................
// // Java program to find factorial of given number
// class Test {
// 	// method to find factorial of given number
// 	static int factorial(int n)
// 	{
// 		if (n == 0)
// 			return 1;

// 		return n * factorial(n - 1);
// 	}

// 	// Driver method
// 	public static void main(String[] args)
// 	{
// 		int num = 5;
// 		System.out.println("Factorial of " + num
// 						+ " is " + factorial(5));
// 	}
// }
