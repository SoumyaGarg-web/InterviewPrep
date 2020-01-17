/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int tilt=0;
    int findTilt(TreeNode* root) {
        sum(root);
        return tilt;
        
    }
    int sum(TreeNode* root){
    int l,r;
        if(root==NULL)
            return 0;
        
        l = sum(root->left);
        r = sum(root->right);
        
        tilt = tilt + abs(l - r);
        return l+r+root->val;
    }
};
