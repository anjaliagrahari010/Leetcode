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
    bool sum(TreeNode *root, int s, int targetSum){
        if(root==NULL)
            return false;
        s+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(s==targetSum)
                return true;
        }
        return sum(root->left,s,targetSum) || sum(root->right,s,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return sum(root,0,targetSum);
        
    }
};