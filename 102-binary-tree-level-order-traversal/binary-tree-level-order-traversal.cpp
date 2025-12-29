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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;
        Fun(root, res);
        return res;
    }
    void Fun(TreeNode *root, vector<vector<int>>&res){
        if(root==nullptr)return;
        queue<TreeNode*>q;
        // cout<<root->val;
        q.push(root);
        // q.push_back(root->val);
        while(!q.empty()){
            int levelSize=q.size();
            vector<int>curr;
            for(int i=0;i<levelSize;i++){
            TreeNode* fr=q.front();
            q.pop();
            curr.push_back(fr->val);
            if(fr->left) q.push(fr->left);
             if(fr->right) q.push(fr->right);
            }
        res.push_back(curr);
        }
    }
};