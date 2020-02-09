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
    int i = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
        return build(preorder,inorder,0,inorder.size()-1);
    }
    
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int start,int end){
       
        
            if(start>end)
                return NULL;
            int k;
            TreeNode* root = new TreeNode(preorder[i]);
            i++;
        
            auto it = std::find(inorder.begin(),inorder.end(),root->val);
            if(it!=inorder.end()){
                 k = distance(inorder.begin(), it);
            }
            
            root->left = build(preorder,inorder,start,k-1);
            root->right = build(preorder,inorder,k+1,end);
        
        return root;
    }
};
