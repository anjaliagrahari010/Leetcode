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
    int tilt=0;
    int dfs(TreeNode *root){
         if(root==NULL)
            return 0;
        int leftT=dfs(root->left);
        int rightT=dfs(root->right);
        tilt+=abs(leftT-rightT);
        return root->val+leftT+rightT;
    }
    int findTilt(TreeNode* root) {
       dfs(root);
       return tilt;
    }
};