class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int>m;
        string str;
        int i;
        priority_queue<pair<int,char>>p;
        for(i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        for(auto k:m){
            p.push({k.second,k.first});
        }
        
        while(!p.empty()){
            int n = p.top().first;
            for(i=0;i<n;i++){
                str.push_back(p.top().second);
            }
            p.pop();
        }
        return str;
    }
};
