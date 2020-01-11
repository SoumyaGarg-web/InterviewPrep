class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     
        
        if(nums1.size()==0){
            return {};
        }
        vector<int>t;
        map<int,int>m;
        int i=0;
        int j=1;
        
        while(i!=nums2.size()-1){

            if(nums2[i]<nums2[j]){
                m[nums2[i]]=nums2[j];
                i++;
                j=i+1;
                if(j==nums2.size())
                    m[nums2[i]]=-1;
            }
            else{
                j++;
                if(j==nums2.size()){
                m[nums2[i]]=-1;
                i++;
                if(i+1!=nums2.size())
                    j=i+1;
            }
            }
        }
        m[nums2[i]]=-1;
        int k;
        for(k=0;k<nums1.size();k++){
            t.push_back(m[nums1[k]]);
        }
        
        return t;
   }
};
