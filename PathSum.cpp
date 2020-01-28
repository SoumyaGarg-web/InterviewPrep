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
public:int flag=0;
    bool hasPathSum(TreeNode* root, int sum) {
        int r=0;
        Sum(root,r,sum);
        return(flag==1);
     }
    int Sum(TreeNode *root, int r ,int sum){
        if(!root)
            return flag;
        r += root->val;
        if(root->left==NULL && root->right==NULL){
            if(r==sum){
                flag=1;
                return flag;
            }
        }
        if(root->left)
            Sum(root->left,r,sum);
        if(root->right)
            Sum(root->right,r,sum);
        return flag;
    }
};
