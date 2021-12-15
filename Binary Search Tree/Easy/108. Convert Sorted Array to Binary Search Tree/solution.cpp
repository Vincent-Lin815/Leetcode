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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty()) return nullptr;
        
        return buildBST(nums.begin(), nums.end());
    }
    
    TreeNode* buildBST(vector<int>::iterator begin, vector<int>::iterator end) {
        if (begin >= end) return nullptr;
        
        vector<int>::iterator mid = begin + (end - begin) / 2;
        
        TreeNode* node = new TreeNode(*mid);
        node->left = buildBST(begin, mid);
        node->right = buildBST(mid + 1, end);
        
        return node;
    }
};
