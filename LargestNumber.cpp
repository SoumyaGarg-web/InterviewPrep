class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string>v;
        int i;
        for(i=0;i<nums.size();i++){
            v.push_back(to_string(nums[i]));
        }
        
        sort(v.begin(),v.end(),comp());
        
        string str;
        for(string s:v)
            str += s;
        
        i=0;
        while(str[i]=='0')
            i++;
        
        return i==str.size()? "0" :str;
        
    }
    
    struct comp{
        bool operator()(string &a,string &b){
            return a+b>b+a;
        }
    };
};
