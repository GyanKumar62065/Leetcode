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
    bool isEvenOddTree(TreeNode* root) {

        int level = 0;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();

            int prev = 0;
            int currVal = 0;

            for(int i =0 ;i < sz; i++){
                // prev VAlue Initialization at every level
                if(i == 0 && level % 2 == 0){
                    prev = INT_MIN;
                }
                if(i == 0 && level % 2 == 1){
                    prev = INT_MAX;
                }

                TreeNode *curr = q.front();
                q.pop();

                currVal = curr->val;

                if((level % 2 == 0) && ((currVal % 2 != 1) || (currVal <= prev))){
                    return false;
                }

                if((level % 2 == 1) && ((currVal % 2 != 0) || (currVal >= prev))){
                    return false;
                }

                prev = currVal;

                if(curr->left)
                    q.push(curr->left);
                
                if(curr->right) 
                    q.push(curr->right);
            }
            level++;
        }

        return true;
        
    }
};