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
    bool isCousins(TreeNode* root, int x, int y) {
        unordered_set<TreeNode*> temp;
        queue<TreeNode*> togo;
        togo.push(root);
        
        while(!togo.empty()){
            int n = togo.size();
            
            for(int i = 0; i < n; i++){
                TreeNode* parent = togo.front();
                togo.pop();
                
                for(auto node:{parent->left, parent->right}){
                    if(node != NULL){
                        if(node->val == x || node->val == y) temp.insert(parent);
                        togo.push(node);
                    }
                }
            }
            
            if(temp.size() > 0) return temp.size() == 2;
        }
        return false;
    }
};
