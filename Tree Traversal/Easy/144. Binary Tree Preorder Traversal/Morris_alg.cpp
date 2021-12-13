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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode *currNode = root;
        
        while(currNode){
            if(currNode->left){
                TreeNode *predecessor = currNode->left;
                
                while(predecessor->right && predecessor->right != currNode) predecessor = predecessor->right;
                if(!predecessor->right){
                    predecessor->right = currNode;
                    ans.push_back(currNode->val);
                    currNode = currNode->left;
                }else{
                    predecessor->right = NULL;
                    currNode = currNode->right;
                }
            }else{
                ans.push_back(currNode->val);
                currNode = currNode->right;
            }
        }
        
        return ans;
    }
};
