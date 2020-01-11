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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        stack<TreeNode*>RL;
        stack<TreeNode*>LR;
        vector<vector<int>>k;
        vector<int>r;
        
        int i,m,n;
        if(!root)
            return {};
        RL.push(root);
        while(!RL.empty() || !LR.empty()){
            n = RL.size();
            for(i=0;i<n;i++){
                root = RL.top();
                RL.pop();
                r.push_back(root->val);
                if(root->left)
                    LR.push(root->left);
                if(root->right)
                    LR.push(root->right);
            }
            k.push_back(r);
            r.clear();
            
            m = LR.size();
            if(!LR.empty()){
            for(i=0;i<m;i++){
                root = LR.top();
                LR.pop();
                r.push_back(root->val);
                if(root->right)
                    RL.push(root->right);
                if(root->left)
                    RL.push(root->left);
            }
            k.push_back(r);
            r.clear();
            }
        }
        
        return k;
        
        
    }
};
