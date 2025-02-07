#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,10,6,2,3};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
            //  return max;
        }
    }
        // return max;
    cout<<max;
    
    
}