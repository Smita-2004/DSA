#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int base;
    int expo;
    int result=1;

    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;

    for(int i=0;i<expo;i++){
         result= result*base;
    }

    cout<<"Result: "<<result;
}