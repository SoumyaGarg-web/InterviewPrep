#SUBMISSION 1: USING LEVEL ORDER TRAVERSAL BUT FAILED IN CASE OF SKEW TREE.

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
    int maxDepth(TreeNode* root) {
        
        queue<TreeNode*>q;
        int count=0;
        if(!root)
            return 0;
        q.push(root);
        while(!q.empty()){
            root = q.front();
            q.pop();
            count++;
            if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
        }
        
        int t = log2(count)+1;
        
        return t;
    }
};


#SUBMISSION 2:

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
    int maxDepth(TreeNode* root) {
        
        if(!root)
            return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};
