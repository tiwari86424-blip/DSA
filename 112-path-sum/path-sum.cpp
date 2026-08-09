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
    
    bool pathsum(TreeNode* root,int targetsum){
        if(root==nullptr) return false;
        if(root->left==nullptr && root->right==nullptr){
            return targetsum==root->val;
        }
       return (pathsum(root->left,targetsum-root->val)
        || pathsum(root->right,targetsum-root->val));
       
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       
        return pathsum(root,targetSum);
    }
};