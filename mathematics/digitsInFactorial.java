// Given an integer N. Find the number of digits that appear in its factorial. 
// Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
// Example 1:
// Input: N = 5
// Output: 3
// Explanation: Factorial of 5 is 120.
// Number of digits in 120 is 3 (1, 2, and 0)
// Example 2:
// Input: N = 120
// Output: 199
// Explanation: The number of digits in
// 120! is 199

import java.io.*;
import java.util.*;
import java.math. BigDecimal;
class Main {
public static void main (String[] args) {
Scanner sc=new Scanner(system.in);
// taking total testcases
int T=sc.nextInt();
while(T-->0){
Solution obj=new Solution();
int N;
// taking N
N=sc.nextInt();
// calling method digitsInFactoria1()
System.out.println (obj.digitsInFactoria1 (N) ) ;
}
}
}

class Solution{
    public int digitsInFactorial(int N){
        // code here
       if(N==0){
           return 1;
       }
       double count=0;
       for(int i=1;i<=N;i++){
           count+=Math.log10(i);
       }
       return (int)count+1;
    }
}