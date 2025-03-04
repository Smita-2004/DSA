//........................leetode 3005..............
// class Solution {
// public:
//     int maxFrequencyElements(vector<int>& arr) {
//         int n=arr.size();
//         unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             mp[arr[i]]++;
//         }
//         int cnt=0;
//         int maxFrequency=0;
//         for(auto it:mp){
//            if(it.second >maxFrequency){
//             maxFrequency=it.second;
//             cnt=maxFrequency;
//            }
//            else if(it.second == maxFrequency){
//             cnt += maxFrequency;
//            }
           
//         }
       
//         return cnt;
//     }
// };