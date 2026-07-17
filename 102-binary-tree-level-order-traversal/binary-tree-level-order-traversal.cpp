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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
           int len=Q.size();
           vector<int>level;
           while(len--){
            TreeNode* node=Q.front();
            level.push_back(node->val);
            if(node->left) Q.push(node->left);
            if(node->right) Q.push(node->right);
            Q.pop();
           }
           ans.push_back(level);
        }
        return ans;
    }
};