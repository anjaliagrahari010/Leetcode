class MinStack {
public:
    stack<long long int>st;
    long long int minVal;

    MinStack() {
        
    }
    
    void push(int value) {
        if(st.empty()){
            st.push(value);
            minVal=value;
        }
        else{
            if(value<minVal){
                st.push((long long int) 2*value -minVal);
                minVal=value;
            }
            else{
                st.push(value);
            }
        }
    }
    
    void pop() {
        if(st.top()<minVal){
            minVal=2*minVal-st.top();
           
        }
         st.pop();
    }
    
    int top() {
        if(st.top()<minVal){
            return minVal;
        }
        else{
           return st.top();
        }
    }
    
    int getMin() {
        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */