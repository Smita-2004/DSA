class Solution {
    public:
        int rob(vector<int>& nums) {
            int n = nums.size();
            
            if (n == 0) return 0;
            if (n == 1) return nums[0];
    
            int prev2 = 0;  
            int prev1 = 0;  
            int curr = 0;  
    
            for (int i = 0; i < n; i++) {
                curr = max(nums[i] + prev2, prev1);
                prev2 = prev1;
                prev1 = curr;
            }
    
            return curr;
        }
    };
    