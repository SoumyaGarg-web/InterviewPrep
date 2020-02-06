class MinStack {
public:
    /** initialize your data structure here. */
    int min = INT_MAX;
    stack<int>t2; 
    stack<int>t1;
    MinStack() {
      // MinStack minStack = new MinStack();
    }
    
    void push(int x) {
        if(t1.empty())
            t1.push(x);
        else if(x<=t1.top()){
            min = x;
            t1.push(x);
        }
        t2.push(x);
    }
    
    void pop() {
        if(t1.top()==t2.top()){
            t1.pop();
            t2.pop();
        }
        else
            t2.pop();
    }
    
    int top() {
        if(t2.empty())
            return t1.top();
        return t2.top();
    }
    
    int getMin() {
        if(t1.empty())
            return t2.top();
        
        return t1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
