class Solution {
    public:
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<vector<int>> ans;
            vector<int> path;
            sort(candidates.begin(), candidates.end());
    
            function<void(int, int)> dfs = [&](int start_index, int remaining) {
                if (remaining == 0) {
                    ans.push_back(path);
                    return;
                }
                for (int i = start_index; i < candidates.size(); ++i) {
                    if (i > start_index && candidates[i] == candidates[i - 1]) 
                        continue;
                    if (remaining - candidates[i] < 0) 
                        break;
                    path.push_back(candidates[i]);
                    dfs(i + 1, remaining - candidates[i]);
                    path.pop_back();
                }
            };
    
            dfs(0, target);
            return ans;
        }
    };
    