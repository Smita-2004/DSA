// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         int n=arr.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]+arr[j]==target){
//                     return {i,j};
//                 }
//             }
//         }
//         return {};

//     }
// };



// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         unordered_map<int, int> mp;
        
//         for (int i = 0; i < arr.size(); i++) {
//             int complement = target - arr[i];
            
//             // Check if the complement exists in the map
//             if (mp.find(complement) != mp.end()) {
//                 return {mp[complement], i};  // Return the indices of the complement and the current number
//             }
            
//             // Store the current number and its index in the map
//             mp[arr[i]] = i;
//         }
        
//         // If no solution is found, return an empty vector
//         return {};
//     }
// };
