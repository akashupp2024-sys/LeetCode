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
    vector<TreeNode* > node;
    vector<int> ans;

    void solve (TreeNode*root){
        if(root == NULL){
            return;
        }
        solve(root->left);
        node.push_back(root);
        ans.push_back(root->val);
        solve(root->right);

    }


    void  recoverTree(TreeNode* root) {

        solve(root);

        sort(ans.begin(), ans.end());

        for(int i = 0; i < node.size(); i++){
            node[i] -> val = ans[i];
        }
    }
};