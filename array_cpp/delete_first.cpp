#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);  
    int element;
    cout<<"Enter elements: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr.erase(arr.begin());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}

