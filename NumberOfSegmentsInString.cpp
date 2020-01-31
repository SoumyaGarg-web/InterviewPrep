class Solution {
public:
    int countSegments(string s) {
        
        string t="";
        int count = 0;
        for(auto x:s){
            if(t!="" && x==' '){
                count++;
                t="";
            }
            else if(x!=' ')
                t = t+x;
        }
        if(t!="" && s[s.size()-1]!=' ')
          count++;
        
        return count;
    }
};
