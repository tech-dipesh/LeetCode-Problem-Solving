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
    bool isValidBST(TreeNode* root) {
        return Code(root, nullptr,  nullptr);
    }
    bool Code(TreeNode *root, TreeNode *minvalue, TreeNode *maxvalue){
        // if(root==nullptr) return true;
        if(!root)return true;
        if((minvalue && minvalue->val >= root->val) || (maxvalue && maxvalue->val <= root->val))return false;
       return Code(root->left, minvalue, root) && Code(root->right, root, maxvalue);
    }
};