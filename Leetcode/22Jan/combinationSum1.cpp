class Solution {
    public:
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            sort(candidates.begin(), candidates.end());
            vector<vector<int>> combinations;
            vector<int> currentCombo;
    
            function<void(int, int)> depthFirstSearch = [&](int index, int remaining) {
                if (remaining == 0) {
                    combinations.emplace_back(currentCombo);
                    return;
                }
                if (index >= candidates.size() || remaining < candidates[index]) {
                    return;
                }
    
                depthFirstSearch(index + 1, remaining);
                currentCombo.push_back(candidates[index]);
                depthFirstSearch(index, remaining - candidates[index]);
                currentCombo.pop_back();
            };
    
            depthFirstSearch(0, target);
            return combinations;
        }
    };
    