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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        
        queue<TreeNode*> check;
        
        check.push(root->left);
        check.push(root->right);
        
        while(!check.empty()){
            TreeNode* left = check.front();
            check.pop();
            TreeNode* right = check.front();
            check.pop();
            
            if(!left && !right) continue;
            if(!left || !right) return false;
            if(left->val != right->val) return false;
            
            check.push(left->left);
            check.push(right->right);
            check.push(left->right);
            check.push(right->left);
        }
        
        return true;
    }
};
