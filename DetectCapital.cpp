class Solution {
public:
    bool detectCapitalUse(string word) {
        
        return (isAllCap(word) || isFirstCap(word) || isNotCap(word));
    }
    
    bool isAllCap(string s){
        
        for(auto x:s){
            if(!isupper(x))
                return false;
        }
        return true;
    }
    
    bool isFirstCap(string s){
        
        int flag=0;
        if(isupper(s[0])){
        for(int i=1;i<s.size();i++){
            if(islower(s[i]))
                flag=1;
            else {
                flag=0;
                return false;
            }
        }
        }
        return (flag==1);
    }
    
    bool isNotCap(string s){
        
        for(auto x:s){
            if(!islower(x))
                return false;
        }
        return true;
    }
};
