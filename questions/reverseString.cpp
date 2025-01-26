#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;
    // reverse the whole string
    reverse(str.begin(),str.end());
    cout<<str;

    //reverse the string from 2nd index
    reverse(str.begin()+2,str.end());
    cout<<str;
}