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
TreeNode *parentX = nullptr;
TreeNode* parentY = nullptr;
int depthX=-1, depthY=-1;
void ht(TreeNode* root, TreeNode* parent, int depth, int x, int y){
    if(root==NULL)
        return ;
    if(root->val == x){
        parentX = parent;
        depthX = depth;
    }
    if(root->val == y){
        parentY = parent;
        depthY = depth;
    }
    ht(root->left, root, depth+1,x,y);
    ht(root->right, root, depth+1,x,y);
}
    bool isCousins(TreeNode* root, int x, int y) {
        ht(root, NULL, 0, x,y);
        return depthX == depthY && parentX != parentY;
    }
};