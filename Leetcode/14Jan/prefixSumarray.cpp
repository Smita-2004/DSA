// arr={1,5,7,0,14} , pr sum={1,6,13,13,27}
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> sum(n);
    for (int i = 0; i < n; i++) {
        int s = 0;  
        for (int j = 0; j <= i; j++) { 
            s += arr[j];  
        }
        sum[i] = s; 
    }

    cout << "Prefix sum array: ";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
