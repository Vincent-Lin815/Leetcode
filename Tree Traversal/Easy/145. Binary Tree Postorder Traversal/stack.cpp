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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        
        stack<TreeNode *> temp;
        temp.push(root);
        
        while(!temp.empty()){
            TreeNode *node = temp.top();
            
            if(!node->right && !node->left){
                ans.push_back(node->val);
                temp.pop();
            }
            
            if(node->right){
                temp.push(node->right);
                node->right = NULL;
            }
            
            if(node->left){
                temp.push(node->left);
                node->left = NULL;
            }
        }
        
        return ans;
    }
};
