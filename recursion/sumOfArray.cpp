// int getSum(int *arr, int size){
//     if(size == 0) return 0;
//     if(size == 1) return arr[size];
//     int remaining = getSum(arr+1, size-1);
//     int sum = arr[0] + remaining;
//     return sum;
// }