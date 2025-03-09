// 739. Daily Temperatures  Leetcode

// class Solution {
// public:
//     vector<int> dailyTemperatures(vector<int>& arr) {
//         int n = arr.size();
//         stack<int> s;
//         vector<int> result(n, 0);

//         for (int i = n - 1; i >= 0; i--) {
//             while (!s.empty() && arr[i] >= arr[s.top()]) {
//                 s.pop();
//             }
//             if (!s.empty()) {
//                 result[i] = s.top() - i;
//             }
//             s.push(i);
//         }

//         return result;
//     }
// };


