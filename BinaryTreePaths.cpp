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
       vector<string>v;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
            return {};
        string s="";
        v=path(root,s);
        return v;
        
    }
    vector<string>path(TreeNode *root,string s){
          
        s += to_string(root->val);
        if(root->left==NULL && root->right==NULL){
            v.push_back(s);
        }
        else{
            if(root->left)
                path(root->left,s+"->");
            if(root->right)
                path(root->right,s+"->");
        }
     return v;   
    }
};
