// 84. Largest Rectangle in Histogram  Leetcode

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         stack<int> st;
//         vector<int> left(n, -1), right(n, n);

//         // Left smaller
//         for (int i = 0; i < n; i++) {
//             while (!st.empty() && heights[st.top()] >= heights[i]) {
//                 st.pop();
//             }
//             if (!st.empty()) {
//                 left[i] = st.top();
//             }
//             st.push(i);
//         }

//         // Right smaller
//         stack<int> s2;
//         for (int i = n - 1; i >= 0; i--) {
//             while (!s2.empty() && heights[s2.top()] >= heights[i]) {
//                 s2.pop();
//             }
//             if (!s2.empty()) {
//                 right[i] = s2.top();
//             }
//             s2.push(i);
//         }

//         int max_area = 0;
//         for (int i = 0; i < n; i++) {
//             int width = (right[i] - left[i] - 1);
//             int area = width * heights[i];
//             max_area = max(max_area, area);
//         }

//         return max_area;
//     }
// };
