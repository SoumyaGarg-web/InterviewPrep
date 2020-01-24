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
    TreeNode* increasingBST(TreeNode* root) {
        
        stack<TreeNode*>s;
          TreeNode *k = new TreeNode(0);
          TreeNode *t = k;
        while(root || !s.empty()){
            if(root){
                s.push(root);
                root = root->left;
            }
            else{
                root = s.top();
                s.pop();
                t->right = new TreeNode(root->val);
                t = t->right;
                root = root->right;
            }
        }
        return k->right;
    }
};
