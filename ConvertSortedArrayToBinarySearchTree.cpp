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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int l = 0;
        int r = nums.size()-1;
        
        return sort(l,r,nums);
            
    }
    
    TreeNode* sort(int l,int r,vector<int>& nums){
    
            if(l>r)
                return NULL;
            int mid = (l+r)/2;
            
            TreeNode *root = new TreeNode(nums[mid]);
            root->left = sort(l,mid-1,nums);
            root->right = sort(mid+1,r,nums);
        
            return root;
                
    }
};
