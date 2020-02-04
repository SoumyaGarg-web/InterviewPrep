
#SUBMISSION 1:

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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
            
        vector<int>v1;
        vector<int>v2;
        vector<int>v3;
        
        v1 = preorder(root1);
        v2 = preorder(root2);
        
        int i = 0;
        int j = 0;
        
        while(i!=v1.size() && j!=v2.size()){
            if(v1[i]<v2[j]){
                v3.push_back(v1[i]);
                i++;
            }
            else{
                v3.push_back(v2[j]);
                j++;
            }
        }
        
        while(i!=v1.size()){
            v3.push_back(v1[i]);
            i++;
        }
        while(j!=v2.size()){
            v3.push_back(v2[j]);
            j++;
        }
        
        return v3;
        
        
    }
    vector<int>preorder(TreeNode *root){
        
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
        return v;
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
     vector<int>v;
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    
       
        preorder(root1);
        preorder(root2);
        
        sort(v.begin(),v.end());
        return v;
    }
        
    void preorder(TreeNode *root){
        
        stack<TreeNode*>s;
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
        //return v;
    }
    
};
