#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target){
    if(size == 0) return false;
    if(arr[0] == target) return true;
    bool found = linearSearch(arr+1, size-1 ,target);
    return found; 
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    if (linearSearch(arr, size, target))
        cout << "Element found!" << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}