class MyStack {
public:
stack<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int o=q.top();
        q.pop();
        return o;
    }
    
    int top() {
        return q.top();
    }
    
    bool empty() {
        if(q.empty())return true;
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */