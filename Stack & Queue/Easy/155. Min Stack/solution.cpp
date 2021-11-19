class MinStack {
private:
    vector<int> _stack, min_stack;
public:
    void push(int val) {
        if(min_stack.empty() || min_stack.back() >= val){
            min_stack.push_back(val);
        }else{
            min_stack.push_back(min_stack.back());
        }
        _stack.push_back(val);
    }
    
    void pop() {
        _stack.pop_back();
        min_stack.pop_back();
    }
    
    int top() {
        return _stack.back();
    }
    
    int getMin() {
        return min_stack.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
