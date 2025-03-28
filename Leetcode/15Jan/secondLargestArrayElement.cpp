// WAP to find second largest element of an array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // second largest
    int max1=-1;
    int max2 = -1;
    
      for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1; // Update second largest
            max1 = arr[i]; // Update largest
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i]; // Update second largest if it's less than max1
        }
    }
    // return max2;
    cout<<max2;
}