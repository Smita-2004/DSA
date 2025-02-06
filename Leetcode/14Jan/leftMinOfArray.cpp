//find the left min of each element arr={5,6,2,3,1,4}, output expected={0,5,5,2,2,1}

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> leftMin(n); // Array to store left minimums

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            leftMin[i] = -1; // No elements to the left of the first element
        } else {
            int minVal = arr[0]; // Initialize with the first element
            for (int j = 0; j < i; j++) {
                if (arr[j] < minVal) {
                    minVal = arr[j];
                }
            }
            leftMin[i] = minVal;
        }
    }

    cout << "Left minimums: ";
    for (int i = 0; i < n; i++) {
        cout << leftMin[i] << " ";
    }
    cout << endl;

    return 0;
}


