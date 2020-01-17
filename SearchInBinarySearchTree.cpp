#SUBMISSION 1 VIA RECURSION:

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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        TreeNode* l;
        if(root==NULL)
            return 0;
        if(root->val == val)
            return root;
        l = searchBST(root->left,val);
        if(l!=0)
            return l;
        return(searchBST(root->right,val));
        
    }
};

#SUBMISSION 2:(ITERATIVE)

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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            
            root = q.front();
            q.pop();
            
            if(root->val==val)
                return root;
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
            
        }
        return 0;
        
    }
};
