class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int min = INT_MAX;
        int i,j;
        string t;
        string k;
        for(i=0;i<strs.size();i++){
            if(strs[i].size()<min){
                min = strs[i].size();
                t=strs[i];
            }
        }
        int flag=0;
        for(j=0;j<t.size();j++){
            for(i=0;i<strs.size();i++){
                if(strs[i][j]!=t[j]){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                k.push_back(t[j]);
        }
        return k;   
    }
};
