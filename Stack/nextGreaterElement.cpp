#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    stack<int> stk;
    vector<int> nge(nums.size(), -1);

    for (int i = 0; i < nums.size(); ++i) {
        while (!stk.empty() && nums[stk.top()] < nums[i]) {
            nge[stk.top()] = nums[i];
            stk.pop();
        }
        stk.push(i);
    }
    return nge;
}

int main() {
    vector<int> nums = {4, 5, 2, 10};
    vector<int> nge = nextGreaterElement(nums);

    for (int n : nge) {
        cout << n << " ";
    }
    return 0;
}
