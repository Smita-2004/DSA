#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr.push_back(8);
    for(int i=0;i<n+1;i++){
        cout<<arr[i];
    }
}