// // WAP to remove duplicate elements from an array

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//         int index=1;
//         for(int i=1;i<n;i++){
//             if(nums[i]!=nums[i-1]){
//                 nums[index++]=nums[i];
//             }
//         }
//         return index;
// }


#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Use a set to store unique elements
    set<int> uniqueElements(arr.begin(), arr.end());

    cout << "Array after removing duplicates: ";
    for (int x : uniqueElements) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
