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

    void preOrder(TreeNode *root , int &ans , int &curr){
        // if((root->left == NULL) && (root->right == NULL)){
        if(root == NULL){
            // ans += curr;
            return;
        }
        int data = root->val;
        curr *= 10;
        curr += data;
        cout << curr << endl;
        if(!root->left && !root->right){
            ans += curr;
        }

        preOrder(root->left , ans , curr);
        preOrder(root->right , ans , curr);
        curr -= data;
        curr /= 10;
        
    }

    int sumNumbers(TreeNode* root) {

        int ans = 0 , curr = 0;
        preOrder(root , ans , curr);
        return ans;
    }
};