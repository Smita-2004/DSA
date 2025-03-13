// Next Greater Element Right(GFG)

// class Solution {
//   public:
//     // Function to find the next greater element for each element of the array.
//     vector<int> nextLargerElement(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         stack<int> s;
//         vector<int> res(n);
//         for(int i=n-1;i>=0;i--){
//             while(!s.empty() && s.top() <= arr[i]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 res[i]=-1;
//             }
//             else{
//                 res[i] = s.top();
//             }
//             s.push(arr[i]);
//         }
//         return res;
//     }
    

    
// };