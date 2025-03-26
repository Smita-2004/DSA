/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
    public:
        vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> allPaths; 
            vector<int> currentPath; 
            function<void(TreeNode*, int)> depthFirstSearch = [&](TreeNode* node, int remainingSum) {
                if (!node) 
                    return;
              
                remainingSum -= node->val; 
                currentPath.emplace_back(node->val); 
                if (!node->left && !node->right && remainingSum == 0) {
                    allPaths.emplace_back(currentPath);
                }
                depthFirstSearch(node->left, remainingSum);
                depthFirstSearch(node->right, remainingSum);
    
                currentPath.pop_back();
            };
            depthFirstSearch(root, targetSum);
            return allPaths;
        }
    };