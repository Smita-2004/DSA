#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //generating all subarray

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
                //printing subarrays
                for(int k=i;k<=j;k++){
                    cout<<arr[k];
                }
        }
    }
}