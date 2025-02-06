#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,5,3,2,6};
    int a[5];
    for(int i=4;i>=0;i--){
        a[i]=arr[i];
        cout<< a[i]<<" ";
    }
   
}