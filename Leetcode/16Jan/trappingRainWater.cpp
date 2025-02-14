// class Solution {
// public:
//     int trap(vector<int>& arr) {
//         int n=arr.size();
//         if(n<3){
//             return 0;
//         }
//         vector<int> left(n,0);
//         left[0]=arr[0];
//         for(int i=1;i<n;i++){
//             left[i]=max(left[i-1],arr[i]);
//         }
      
//         vector<int> right(n,0);
//         right[n-1]=arr[n-1];
//         for(int i=n-2;i>=0;i--){
//             right[i]=max(right[i+1],arr[i]);
//         }

//         int res=0;
//         for(int i=1;i<n-1;i++){
//             int minOf=min(left[i],right[i]);
//             if (minOf > arr[i]) {
//             res += minOf - arr[i];
//         }
//         }
//         return res;
//     }
// };