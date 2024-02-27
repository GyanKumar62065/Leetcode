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

int height(TreeNode *root){
    if(!root) return 0;
    return max(height(root->left) , height(root->right))+1;
}

int ans = 0;
void helper(TreeNode* root){
    
    if(!root) return;
    int lh = height(root->left);
    int rh = height(root->right);
    ans = max(ans , lh + rh);
    helper(root->left);
    helper(root->right);
}

    
    
public:
    int diameterOfBinaryTree(TreeNode* root) {
        helper(root);
        return ans;

    }
};