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

// BFS

class Solution {
public:
    int calc_depth(TreeNode *node){
        if(node == NULL) return 0;
        return max(calc_depth(node->left), calc_depth(node->right)) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL) return true;
        
        int left_depth = calc_depth(root->left);
        int right_depth = calc_depth(root->right);
        
        return abs(left_depth-right_depth) <= 1 && isBalanced(root->left) && isBalanced(root->right);
    }
};
