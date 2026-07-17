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
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*>Q;
        Q.push(root);
        bool lefttoright=true;
        while(!Q.empty()){
            int n=Q.size();
            vector<int>row(n,0);
            for(int i=0;i<n;i++){
                TreeNode* node=Q.front();
                int index = lefttoright ? i : n-i-1 ;
                row[index]=node->val;
                if(node->left) Q.push(node->left);
                if(node->right) Q.push(node->right);
                Q.pop();
            }
            ans.push_back(row);
            lefttoright=!lefttoright;
        }
        return ans;
    }
};