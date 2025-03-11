// 20. Valid Parentheses Leetcode


// class Solution {
// public:
//     bool isValid(string str) {
//     stack<char> s;
//     int n=str.size();
//     bool balanced =true;
//     for(int i=0;i<n;i++){
//         char c= str[i];
//         if(c=='(' || c=='{' || c=='['){
//             s.push(c);
//         }
//         else{
//             if(s.empty()){
//                 return false;
//             }
//             char top=s.top();
//             if((c==')' && top == '(')||
//                 (c=='}' && top== '{') ||
//                 (c==']' && top == '[')
//             ) {
//                 s.pop();
//             }
//             else{
//                 balanced = false;
//                 break;
//             }
//         }
        
//     }
//     if(!s.empty()){
//         balanced=false;
//     }
//     if(balanced){
//         return true;
//     }
//     else{
//         return false;
//     }
//     }
// };

   
    
 