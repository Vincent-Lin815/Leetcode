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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        
        stack<TreeNode *> temp;
        TreeNode *curr = root;
        
        while(curr || !temp.empty()){
            if(curr){
                temp.push(curr);
                curr = curr->left;
            }else{
                TreeNode *node = temp.top();
                temp.pop();
                ans.push_back(node->val);
                curr = node->right;
            }
        }
        
        return ans;
    }
};
