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
    int getHeightAndDiameter(TreeNode *root , int &currDia){

        if(!root) return 0;
        int lh = getHeightAndDiameter(root->left , currDia); // left sub tree height 
        int rh = getHeightAndDiameter(root->right , currDia); // right sub tree hight
        // Updating diameter at every node 
        currDia = max(currDia , lh + rh);
        return (1 + max(lh , rh) ); // returning the height of current sub tree
    }

public:
    int diameterOfBinaryTree(TreeNode* root) {

        int maxi = 0;
        int h = getHeightAndDiameter(root , maxi);

        return maxi;
        
    }
};