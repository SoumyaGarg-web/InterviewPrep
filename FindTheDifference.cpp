#SUBMISSION 1: O(nlogn)

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]!=t[i])
                return t[i];
        }
        return t[i];
    }
};

#SUBMISSION 2:O(n)

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int ssum=0,tsum=0;
        for(auto i:s){
            ssum += i -'0';
        }
        for(auto i:t){
            tsum += i-'0';
        }
        
        return(tsum-ssum + '0');
    }
};
