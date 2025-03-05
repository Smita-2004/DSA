// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    vector<int> arr={2,2,7,4,3,2,2,1,3,3,3};
    int n=arr.size();
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        cout<<"element: "<<it.first <<",frequency: "<<it.second<<endl;
    }
    

    return 0;
}