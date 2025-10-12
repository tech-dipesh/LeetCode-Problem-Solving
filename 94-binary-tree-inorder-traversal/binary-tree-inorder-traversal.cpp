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
        // Iterative With Stack:
        stack<TreeNode*>st;
        vector<int>vt;
        while(root || !st.empty()){
           while(root){
            st.push(root);
            root=root->left;
           }
            root=st.top();
            st.pop();
            vt.push_back(root->val);
            root=root->right;
        }
        return vt;
    }
};