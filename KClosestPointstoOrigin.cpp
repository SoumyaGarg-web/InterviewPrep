Using Min heap:

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        priority_queue<pair<float,pair<int,int>>,
                       vector< pair<float, pair<int,int> >>,
                       greater< pair<float, pair<int,int> >>
                       >p;
        vector<vector<int>>m;
        vector<int>v;
        int i;

        for(i=0;i<points.size();i++){
            float d = sqrt(pow(points[i][0],2) + pow(points[i][1],2));
            p.push(make_pair(d,make_pair(points[i][0],points[i][1])));
        }
        
        for(i=0;i<K && !p.empty();i++){
            v.push_back(p.top().second.first);
            v.push_back(p.top().second.second);
            m.push_back(v);
            v.clear();
            p.pop();
        }
        
        return m;
    }
};
