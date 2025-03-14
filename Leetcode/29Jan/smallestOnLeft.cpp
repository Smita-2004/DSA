// Smaller on left (GFG)


// class Solution{
// public:
//     vector<int> leftSmaller(int n, int arr[]){
//         // code here
//         stack<int> s;
//         vector<int> res;
//         for(int i=0;i<n;i++){
//             while(!s.empty() && s.top() >= arr[i]){
//                 s.pop();
//             }
//             if(s.empty()){
//                 res.push_back(-1);
//             }
//             else{
//                 res.push_back(s.top());
//             }
//             s.push(arr[i]);
//         }
//         return res;
//     }
// };