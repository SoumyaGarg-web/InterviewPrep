class Solution {
public:
    int balancedStringSplit(string s) {
        
        map<char,int>m;
        string t="";
        int count=0;
        for(auto x:s){
            if(x=='R')
                m[x]++;
            else if(x=='L')
                m['R']--;
            if(m['R']==0)
                count++;
        }
        return count;
    }
};
