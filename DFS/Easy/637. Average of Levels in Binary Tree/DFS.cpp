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

// DFS solution

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        unordered_map<int, pair<int, long>> table;
        
        DFS(root, table, 0);
        
        
        vector<double> ans(table.size());
        
        for(int i = 0; i < ans.size(); i++){
            ans[i] = (double)table[i].second/table[i].first;
        }
        
        return ans;
    }
    
    void DFS(TreeNode *root, unordered_map<int, pair<int, long>> &table, int level){
        if(!root) return;
        
        table[level] = {table[level].first+1, table[level].second + root->val};
        
        DFS(root->left, table, level+1);
        DFS(root->right, table, level+1);
    }
};
