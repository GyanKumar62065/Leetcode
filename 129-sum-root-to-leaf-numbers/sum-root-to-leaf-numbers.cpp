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

    void preOrder(TreeNode* root , int &currSum , int &finalSum){
        if(!root) return;
        currSum *= 10;
        currSum += root->val;
        if(!root->left && !root->right){
            finalSum += currSum;
        }
        preOrder(root->left , currSum , finalSum);
        preOrder(root->right, currSum , finalSum);
        currSum -= root->val;
        currSum /= 10;
        
    }

    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int ans = 0;
        int currSum = 0;
        preOrder(root , currSum , ans);
        return ans; 
    }
};