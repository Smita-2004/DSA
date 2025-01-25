//  Find the Second Largest Element in an Array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements in array: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter elements: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sorting in ascending order
    sort(arr.begin(),arr.end());
    // displaying sorted array
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"Second largest element: ";
    for(int i=0;i<n;i++){
        if(i==n-2){
            cout<<arr[i];
        }
    }

}