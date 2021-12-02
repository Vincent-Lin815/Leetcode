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
    int x_lvl = -1, y_lvl = 0;
    TreeNode *x_parent, *y_parent;
    
    bool isCousins(TreeNode* root, int x, int y) {
        DFS(root, NULL, x, y, 0);
        return x_lvl == y_lvl && x_parent != y_parent;
    }
    
    void DFS(TreeNode* root, TreeNode* parent, int x, int y, int depth){
        if(root == NULL) return;
        
        if(root->val == x){
            x_lvl = depth;
            x_parent = parent;
        }else if(root->val == y){
            y_lvl = depth;
            y_parent = parent;
        }else{
            DFS(root->left, root, x, y, depth+1);
            DFS(root->right, root, x, y, depth+1);
        } 
    }
};
