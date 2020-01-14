class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        
        string t="";
        vector<string>v;
        map<string,int>m;
        int i;
        for(auto x:paragraph){
            x = tolower(x);
            if(!isalnum(x)){ 
                if(t!=""){
                v.push_back(t);
                t ="";
            }}
            else{
                t = t+x;
            }
        }
        v.push_back(t);
        for(i=0;i<v.size();i++){
            m[v[i]]++;
        }
        for(i=0;i<banned.size();i++){
            m[banned[i]]=0;
        }
        int max = INT_MIN;
        string str;
        for(i=0;i<v.size();i++){
            if(m[v[i]]>max){
                max = m[v[i]];
                str = v[i];
            }
        }
        
        return str;
    
        
    }
};
