//Submission 1:O(n2)

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size()<3)
            return false;
        int j=0;
        int i=1,m=INT_MIN;
        
        vector<int>t(nums.size(),1);
        while(i!=nums.size()){
            if(nums[j]<nums[i]){
                t[i]=max(t[i],t[j]+1);
            }
            j++;
            if(i==j){
                j=0;
                i++;
            }
        }
        for(auto i:t)
            m = max(m,i);
        if(m>=3)
            return true;
        return false;
    }
};

//Submission 2: O(n)
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size()<3)
            return false;
        
        int l=INT_MAX,m=INT_MAX,i;
        
        for(i=0;i<nums.size();i++){
            if(nums[i]>m)
                return true;
            else if(nums[i]<m && nums[i]>l)
                m = nums[i];
            else if(nums[i]<l)
                l = nums[i];
        }
        return false;
    }
};
