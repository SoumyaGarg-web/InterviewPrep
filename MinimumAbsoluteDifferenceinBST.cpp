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
  int getMinimumDifference(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>v;
        while(root || !s.empty()){
            if(root){
                s.push(root);
                root = root->left;
            }
            else{
                root = s.top();
                s.pop();
                v.push_back(root->val);
                root = root->right;
            }
        }
        int min = INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            int k = v[i+1]-v[i];
            if(k<min)
                min = k;
        }
    return min;
  
    }
};
