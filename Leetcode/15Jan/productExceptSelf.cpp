// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> arr(n,1);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i!=j){
//                     arr[i]*=nums[j];
//                 }
//             }
//         }
//             return arr;
//         }
        
    
// };


// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> left(n,1); 
//         vector<int> right(n,1);
//         vector<int>res(n,1);
//         for(int i=1;i<n;i++){
//             left[i]=left[i-1]*nums[i-1];
//         }
//         for(int i=n-2;i>=0;i--){
//             right[i]=right[i+1]*nums[i+1];
//         }
//         for(int i=0;i<n;i++){
//             res[i]=left[i]*right[i];
//         }
//        return res;
        
//     }
// };