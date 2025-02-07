#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int original,digit;
    int rev=0;
    original=num;
    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    if(original==rev){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
}

