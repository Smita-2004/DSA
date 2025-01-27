// Remove duplicates
#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n,value;
    vector<int> arr;
    cout<<"Enter number of elements to be added: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter "<<n<<" elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>value;
        arr.push_back(value);
    }
    set<int> s(arr.begin(),arr.end());
    for(auto i:s){
        cout<<i<<" ";
    }
}