class Solution {
public:
    string reorganizeString(string S) {
        
        if(S.size()==1)
            return S;
        map<char,int>m;
        priority_queue<pair<int,char>>p;
        
        for(int i=0;i<S.size();i++){
            m[S[i]]++;
        }
        
        for(auto k:m){
            p.push({k.second,k.first});
        }
        string res="";
        while(!p.empty()){
            auto curr = p.top();
            p.pop();
            if(p.empty()){
                if(curr.first>1)
                    return "";
                else{
                    res += curr.second;
                    return res;
                }
            }
            
            auto curr2 = p.top();
            p.pop();
            res += curr.second;
            res += curr2.second;
            curr.first--;
            curr2.first--;
            if(curr.first>0)
                p.push({curr.first,curr.second});
            if(curr2.first>0)
                p.push({curr2.first,curr2.second});
        }
        return res;
        
        
    }
};
