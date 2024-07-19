// Given a temperature in celsius C. You need to convert the given temperature to Fahrenheit.
// Example 1:
// Input:
// C = 32
// Output: 89.6
// Explanation: Using the conversion 
// formula of celsius to farhenheit , it
// can be calculated that, for 32 degree
// C, the temperature in Fahrenheit = 89.6

// Example 2:
// Input:
// 50
// Output: 122
// Explanation: Using the conversion 
// formulaof celsius to farhenheit, it
// can be calculated that, for 50 degree
// C, the temperature in Fahrenheit = 122.

import java.io.*;
import java. util. *;
class Main {
public static void main (String[] args) {
Scanner sc=new Scanner(System.in);
int T=sc.nextInt();//input number of testcases
while(T-->0){
Solution obj=new Solution();
int C;
C=sc.nextInt();//input temperature in celscius
System.out.println((int)(obj .cToF(C)));//print the output
}
}
}

class Solution
{
    public double cToF(int C)
    {
        //Your code here
        int temp = ((C* 9/5) +(32));
        return temp;
    }
}