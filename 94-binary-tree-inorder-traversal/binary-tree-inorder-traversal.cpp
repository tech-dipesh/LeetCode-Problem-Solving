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
        // Recursive:
        vector<int>vt;
        Fun(vt, root);
        return vt;
    }
// Recrusive call with storing all result on vector:
// have to do pass by reference to add on the vector.
    void Fun(vector<int>&vt, TreeNode* root){
        if(root==nullptr){
            return;
        }
        Fun(vt, root->left);
        vt.push_back(root->val);
        Fun(vt, root->right);
    }
};