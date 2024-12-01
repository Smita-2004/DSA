// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5};
//     int num=9;

//     for(int i=6;i>1;i--){
//         arr[i-1]=arr[i-2];
//     }

//     arr[0]=num;

//     for(int i=0;i<6;i++){
//         cout<< arr[i]<<" ";
//     }
//     return 0;
// }


// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of  array: ";
    cin>>n;
    vector<int> arr(n);
    cout<< "Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter element to add at beginning: ";
    cin>>num;

    // function to add element at beginning
    arr.insert(arr.begin(),num);

// displaying output
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}
