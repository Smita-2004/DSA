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
    if(!arr.empty()){
    arr.pop_back();
    }
    else{
        cout<<"Array empty ";
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    
}

