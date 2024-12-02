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
    int pos;
    cout<<"Enter position: ";
    cin>>pos;
    int num;
    cout<<"Enter number to be inserted: ";
    cin>>num;
    if(pos<0 || pos>arr.size()){
        cout<<"Invalid";
    }
    else{
    arr.insert(arr.begin()+pos, num);
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    }
}

 