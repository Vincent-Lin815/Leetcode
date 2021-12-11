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
    
    bool calc(TreeNode* a, TreeNode* b){
        if(!a && !b) return true;
        if(!a || !b) return false;
        if(a->val != b->val) return false;
        return calc(a->right, b->left) && calc(a->left, b->right);
        
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root->left == 0 && root->right == 0) return true;
        return calc(root->left, root->right);
    }
};
