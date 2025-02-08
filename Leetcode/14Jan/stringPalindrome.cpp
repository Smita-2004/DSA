// #include<iostream>
// using namespace std;
// int main(){
//     string s="Smita";
//     int low=0;
//     int end=s.size();
//     while(low<end){
//         if(s[low]!=s[end]){
//             return false;
//         }
//         low++;
//         end--;
//     }
//     return true;
// }













#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    int start =0 ;
    int end = str.length() -1;
    bool flag = true;

    while(start<end){
        if(str[start]!= str[end]){
            flag=false;
        }
        start++;
        end--;
    }
    if(flag){
        cout<<str<<" "<<"is a palindrome";
    }
    else{
        cout<<str<<" is not a palindrome";
    }
}



