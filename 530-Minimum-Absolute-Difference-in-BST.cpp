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
    int getMinimumDifference(TreeNode* root) {
        int result = INT_MAX;
        int pre = INT_MIN;
        inorder(result,pre,root);
        return result;
    }

    void inorder(int & res,int & pre,TreeNode* root){
          if (!root) return;
          inorder(res,pre,root -> left);
          if(pre != INT_MIN) res = min(res,root -> val -pre);
          pre = root -> val;
          inorder(res,pre,root -> right);
    }
};