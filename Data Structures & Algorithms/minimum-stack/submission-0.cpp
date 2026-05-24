class MinStack {
public:
stack<int> stc;
vector<int>st;
    MinStack() {
        
    }
    
    void push(int val) {
        stc.push(val);
        st.push_back(val);
        
    }
    
    void pop() {
        stc.pop();
        st.pop_back();
        
    }
    
    int top() {
        return stc.top();
    }
    
    int getMin() {
    int t=*min_element(st.begin(),st.end());
    return t;
    }
};
