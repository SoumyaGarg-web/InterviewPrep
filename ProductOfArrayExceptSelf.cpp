#SUBMISSION 1: 
Time complexity:O(n)
Space Complexity:O(n)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>k(nums.size());
        vector<int>L(nums.size());
        vector<int>R(nums.size());
        int i;
        L[0]=1;
        R[nums.size()-1]=1;
        for(i=1;i<nums.size();i++){
            L[i]=L[i-1]*nums[i-1];
        }
        for(i=nums.size()-2;i>=0;i--){
            R[i]=R[i+1]*nums[i+1];
        }
        for(i=0;i<nums.size();i++){
            k[i]=L[i]*R[i];
        }
        return k;
      }
};

#SUBMISSION 2:
Time complexity:O(n)
Space Complexity:O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int>k(nums.size());
        int i,R=1;
        k[0]=1;
        for(i=1;i<nums.size();i++){
            k[i]=k[i-1]*nums[i-1];
        }
        for(i=nums.size()-2;i>=0;i--){
            R=R*nums[i+1];
            k[i]=k[i]*R;
        }
        return k;
    }
};
