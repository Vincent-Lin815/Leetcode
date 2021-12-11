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
        
        queue<TreeNode*> check_left, check_right;
        
        check_left.push(root->left);
        check_right.push(root->right);
        
        while(!check_left.empty() && !check_right.empty()){
            TreeNode* left = check_left.front();
            check_left.pop();
            TreeNode* right = check_right.front();
            check_right.pop();
            
            if(!left && !right) continue;
            if(!left || !right) return false;
            if(left->val != right->val) return false;
            
            check_left.push(left->left);
            check_right.push(right->right);
            check_left.push(left->right);
            check_right.push(right->left);
        }
        
        return true;
    }
};
