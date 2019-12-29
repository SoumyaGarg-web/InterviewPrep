#SUBMISSION 1:
Time Complexity:O(n^2)
Space Complexity:O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            int k = count(nums.begin(),nums.end(),nums[i]);
            if(k!=2)
            {
                break;
            }
        }
        return nums[i];      
        
    }
};

#SUBMISSION 2:
Time Complexity:O(n)
Space Complexity:O(n)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
        map<int,int>m;
        int i;
        for(i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(i=0;i<nums.size();i++){
            cout<<m[nums[i]]<<endl;
            if(m[nums[i]]==1)
                break;
        }
        return nums[i];
   }
};

#SUBMISSION 3:
Time Complexity:O(n)
Space Complexity:O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     
        int a=0;
        for(int i=0;i<nums.size();i++){
            a = a^nums[i];
        }
        return a;
    }
};
