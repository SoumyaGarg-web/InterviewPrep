class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    
        map<int,int>m;
        priority_queue<pair<int,int>>p;
        vector<int>t;
        int i;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        for(auto j:m)
        {
            p.push({j.second,j.first});
        }
        for(i=0;i<k && !p.empty();i++)
        {
            t.push_back(p.top().second);
            p.pop();
        }
    
        return t;
    }
    
    
};
