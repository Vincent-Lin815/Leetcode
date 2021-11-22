class MyQueue {
public:
    stack<int> ipt, opt;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!ipt.empty()){
            opt.push(ipt.top());
            ipt.pop();
        }
        ipt.push(x);
        while(!opt.empty()){
            ipt.push(opt.top());
            opt.pop();
        }
    }
    
    int pop() {
        int out = ipt.top();
        ipt.pop();
        return out;
    }
    
    int peek() {
        return ipt.top();
    }
    
    bool empty() {
        return ipt.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
