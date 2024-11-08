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
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(!root)return ans;
        int alt = 1;
        while(!q.empty()){
            vector<int> v;
            int s = q.size();

            for(int i=0;i<s;i++){ 
            TreeNode* t = q.front();
            q.pop();
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
            v.push_back(t -> val);
            }
            if(alt == -1){
                reverse(v.begin(),v.end());
            }
            alt = alt*-1;
            ans.push_back(v);
        }
        return ans;
    }
};