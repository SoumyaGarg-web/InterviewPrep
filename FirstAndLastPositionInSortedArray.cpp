#SUBMISSION 1: O(n)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>t;
        int i=0;
        int flag=0;
        
        
        if(nums.size()==0)
        {
            t.push_back(-1);
            t.push_back(-1);
            return t;
        }
       for(i=0;i<nums.size();i++)
       {
           if(nums[i]==target){
               flag=0;
               break;
           }
           else
               flag=1;
       }
        if(flag==0)
            t.push_back(i);
        else
            t.push_back(-1);
        
        flag=0;
        for(i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target){
                flag=0;
                break;
            }
            else
                flag=-1;
        }
         if(flag==0)
            t.push_back(i);
        else
            t.push_back(-1);
            
        return t;
        
    }
};



#SUBMISSION 2: O(log n)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int high = nums.size()-1;                
        
        int l = lower_bound(nums,high,target);
        int h = lower_bound(nums,high,target+1)-1;
        
        if(l<nums.size() && nums[l]==target)
            return {l,h};
        else
            return {-1,-1};
        
    }

    int lower_bound(vector<int>& nums,int high,int target){
        int low=0;
        while(low<=high){
                int mid= (low+high)/2;
                if(nums[mid]<target)
                    low = mid+1;
                else 
                    high = mid-1;
        }
        return low;
    }
};
