#SUBMISSION 1:

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i;
        vector<string>v;
        string t="";
        for(auto x:s){
            if(!isalnum(x)){
            if(t!=""){
                v.push_back(t);
                t="";
            }}
            else
                t = t+x;
        }
        if(t!="")
            v.push_back(t);
        
        if(v.size()==0)
            return 0;
        else{
            int k=v.size()-1;
            return v[k].size();
        }
    }
};

#SUBMISSION 2:

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i=s.size()-1;
        int count=0;
        while(i!=-1){
            if(s[i]==' '){
                if(count!=0)
                    return count;
            }
            else
                count++;
            i--;
        }
        return count;
    }
};
