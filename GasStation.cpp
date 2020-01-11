class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int i=0,k=-1,t=0;
        
        while(i!=gas.size()){
            t = t+gas[i]-cost[i];
             if(t<0){
                    t=0;
                    k=-1;
            }
            else if(k==-1){
                    k = i;
            }
            
            i++;
        }
        
        i = 0;
        
        while(i!=k && t>=0){
            t = t+gas[i]-cost[i];
            i++;
        }
        
        if(i==k && t>=0)
            return i;
        else
            return -1;
        
        
        
    }
};
