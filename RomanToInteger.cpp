class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>t;
        t['I']=1; 
        t['V']=5; 
        t['X']=10;
        t['L']=50;
        t['C']=100;
        t['D']=500;
        t['M']=1000;
        
        int i,sum =0;
        for(i=0;i<s.length();i++)
        {
            if(t[s[i]]<t[s[i+1]])
                sum = sum - t[s[i]];
            else
                sum = sum + t[s[i]];
        }
        return sum;
    }
};
