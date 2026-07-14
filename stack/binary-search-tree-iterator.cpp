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
class BSTIterator {
public:

    vector<int> Inorder;
    void solve(TreeNode* root){
        if(root == NULL){
            return ;
        }
        solve(root->left);
        Inorder.push_back(root);
        solve(root->right);

    }

    BSTIterator(TreeNode* root) {

        
        int index = -1;
        solve(root);


        
    }
    
    int next() {

        index++;
        return Inorder[index];
        
    }
    
    bool hasNext() {

        return Inorder[index + 1] < vector.size();
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */