#include<iostream>
#include<vector>
using namespace std;

int main(){
    // input array
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // input traget
    int t;
    cout<<"Enter target: ";
    cin>>t;
    // searching
    for(int i=0;i<arr.size();i++){
        if(arr[i]==t){
            cout<<"element found at index: "<<i;
        }
    }
    
}