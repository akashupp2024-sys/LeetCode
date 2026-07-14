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

    vector<int> ans;
    int index;
    void solve(TreeNode* root){
        if(root == NULL){
            return;
        }

        solve(root-> left);
        ans.push_back(root->val);
        solve(root->right);

    }
    bool findTarget(TreeNode* root, int k) {

        solve(root);
        int st = 0, end = ans.size() - 1, sum = 0;

        while(st <= end){
            sum = sum + ans[st] + ans[end];

            if(sum > k){
                end--;
            }
            else if (sum < k){
                st++;
            }
            else {
                return true;
            }

        }
        return false;
        
    }
};