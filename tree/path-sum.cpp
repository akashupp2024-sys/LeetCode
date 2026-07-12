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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = false;
        tree(root, sum, targetSum, ans);
        return ans;

    }

    void tree(TreeNode* root, int sum, int targetSum, bool &ans){
        if(root == NULL){
            return ;
        }
        sum = sum + root -> val;
        if(root -> left == NULL && root -> right == NULL){
            if(sum == targetSum){
                ans = true;
                return;
            }

        }
        tree(root->left,sum, targetSum, ans);
        tree(root->right, sum, targetSum, ans);
    }
};