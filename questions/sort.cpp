// Binary Search
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,value;
    cout<<"Enter number of elements to enter: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>value;
        arr.push_back(value);
    }
    // sorting in descending order
   sort(arr.begin(),arr.end(),greater<int>());
   cout<<"Array after sorting in descending order: ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    // sorting in ascending order
   sort(arr.begin(),arr.end());
   cout<<"Array after sorting in ascending order: ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}



