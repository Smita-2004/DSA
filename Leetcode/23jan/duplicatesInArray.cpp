// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& arr) {
//         int n=arr.size();
//         unordered_map<int,int> mp;
//         vector<int> dup;
//         for(int i=0;i<n;i++){
//             mp[arr[i]]++;
//         }
//         for(auto it: mp){
//             if(it.second>1){
//                 dup.push_back(it.first);
//             }
//         }
//         return dup;
//     }
// };