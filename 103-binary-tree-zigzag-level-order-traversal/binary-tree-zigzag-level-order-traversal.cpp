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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool lefttoright=true;
        while(q.size()>0){
            int size=q.size();
            vector<int>level(size);
            for(int i=0;i<size;i++){
                int index;
                TreeNode *curr=q.front();
                q.pop();
                if(lefttoright){
                    index=i;
                }
                else{
                    index=size-1-i;
                }

                level[index]=curr->val;
                if(curr->left!=nullptr)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
           ans.push_back(level);
        // Toggle the direction
            lefttoright=!lefttoright;
        }
        return ans;
    }
};