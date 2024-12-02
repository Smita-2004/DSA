#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // taking input arr1
    int n1;
    cout<<"Enter size of arr1: ";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter elements of arr1: ";
    for(int i=0;i<arr1.size();i++){
        cin>>arr1[i];
    }
    
    // taking input arr2
    int n2;
    cout<<"Enter size of arr2: ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Enter elements of arr2: ";
    for(int i=0;i<arr2.size();i++){
        cin>>arr2[i];
    }

    // making arr3 and inserting arr1 and arr2 to it
    vector<int> arr3;
    arr3.reserve(n1+n2);
    arr3.insert(arr3.end(), arr1.begin(), arr1.end());
    arr3.insert(arr3.end(), arr2.begin(), arr2.end());

    //sorting arr3
    sort(arr3.begin(),arr3.end());

    // display arr3
    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }

}