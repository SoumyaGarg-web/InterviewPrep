#SUBMISSION 1:(TLE NOT ACCEPTED)
class KthLargest {
public:  priority_queue<int>p;
         priority_queue<int>q;
        int t;
        int s;
    KthLargest(int k, vector<int>& nums) {
      
        s = k;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
       
        
    }
    
    int add(int val) {
        p.push(val);
        int y = s;
         while(y && !p.empty()){
            t = p.top();
            p.pop();
            q.push(t);
            y--;
        }
        int m;
        while(!q.empty()){
            m = q.top();class KthLargest {
public:  priority_queue<int,vector<int>,greater<int>>p;
         int size;
    KthLargest(int k, vector<int>& nums) {
      
        size = k;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        while(p.size()>size){
            p.pop();
        }
    }
    
    int add(int val) {
       
        p.push(val);
        
        while(p.size()>size){
            p.pop();
        }
        return p.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
            p.push(m);
            q.pop();
        }
        return t;
        
        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
 
 
 #SUBMISSION 2:
 
 
