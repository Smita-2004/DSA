// Insertion is a basic but frequently used operation. Arrays in most languages can not be dynamically shrinked or expanded. Here, we will work with such arrays and try to insert an element at the end of the array.

// You are given an array arr. The size of the array is given by sizeOfArray. You need to insert an element at the end.
// Array already have the sizeofarray -1 elements.

// Example 1:

// Input:
// sizeOfArray = 6
// arr[] = {1, 2, 3, 4, 5}
// element = 90
// Output: 1 2 3 4 5 90
// Explanation: After inserting 90 at the
// end, we have array elements as 
// 1 2 3 4 5 90.
// Example 2:

// Input:
// sizeOfArray = 4
// arr[] = {1, 2, 3}
// element = 50
// Output: 1 2 3 50
// Explanation: After inserting 50 at the 
// end, we have array elements as 
// 1 2 3 50.
// Your Task:
// You don't need to read input or print anything. You only need to complete the function insertAtEnd() that takes arr, sizeOfArray, element as input and modifies arr as per requirements. The driver code takes care of the printing.


import java.io.*;
import java. util.*;
class Array {
public static void main (String[] args) {
Scanner sc=new Scanner(System.in);
// taking testcases
int testcases=sc.nextInt();
while (testcases-->e)
// input size of Array
int sizeOfArray=sc.nextInt();
int arr[]=new int[sizeOfArray];
// inserting elements in the array
for(int i=0;i<sizeOfArray-1;i++){
int x;
x=sc . nextInt();
arr[i]=x;
}

// input element to be inserted
int element=sc.nextInt();
Insert obj=new Insert();
// calling insertAtEnd() function
obj . insertAtEnd (arr, sizeOfArray, element) ;
// printing the elements of the array
for(int i=0;i<sizeOfArray;i++){
System.out.print(arr[i]+" ");
}
System. out . println();
}
}
// }
class Insert
{
    // You only need to insert the given element at 
    // the end, i.e., at index sizeOfArray - 1. You may 
    // assume that the array already has sizeOfArray - 1
    // elements. 
    public void insertAtEnd(int arr[],int sizeOfArray,int element)
    {
        //Your code here 
        // arr[].append(element);
        int idx= sizeOfArray - 1;
        arr[idx]=element;
    }
}