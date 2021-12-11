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

// DFS

class Solution {
public:
    int calc_depth(TreeNode *node){
        if(node == NULL) return 0;
        
        int left_depth = calc_depth(node->left);
        if(left_depth == -1) return -1;
        int right_depth = calc_depth(node->right);
        if(right_depth == -1) return -1;
        
        if(abs(left_depth - right_depth) > 1) return -1;
        
        return max(left_depth, right_depth) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return calc_depth(root) != -1;
    }
};
