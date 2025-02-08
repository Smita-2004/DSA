// find a pair whose sum is equal to target

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,7,6,9};
    int target=8;
    bool found=false;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                found=true;
            }
        }
    }
            if(!found){
                cout<<"No pair found";
            }
        return 0;
    
}



  