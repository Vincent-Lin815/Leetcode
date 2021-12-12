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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        int left_depth = minDepth(root->left);
        int right_depth = minDepth(root->right);
        
        if(root->left == NULL && root->right == NULL) return 1;
        if(root->left == NULL || root->right == NULL) return max(left_depth, right_depth)+1;
        
        return min(left_depth, right_depth)+1;
    }
};
