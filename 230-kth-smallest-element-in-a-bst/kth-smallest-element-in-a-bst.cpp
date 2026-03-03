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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>res;
        while(root || !res.empty()){
            if(root){
                res.push(root);
                root=root->left;
            }
            else{
                // getting the the top most value:
                root=res.top();
                res.pop();
                // i can run the post increament:
                if(--k==0)
                    return root->val;   
                root=root->right;
            }
        }
        return 0;
    }
};