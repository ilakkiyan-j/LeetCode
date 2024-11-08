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
    bool isValidBST(TreeNode* root) {
        return valid(root,LONG_MIN,LONG_MAX);
    }

    bool valid(TreeNode* node,long mn,long mx){
           if(!node) return true;
           if(!(node -> val > mn && node ->val<mx))return false;
           return valid(node -> left,mn,node -> val) && valid(node -> right,node -> val,mx);
    }
    
};