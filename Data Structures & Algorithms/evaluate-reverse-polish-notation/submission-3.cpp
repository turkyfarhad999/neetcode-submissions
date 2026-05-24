class Solution {
public:
     int evalRPN(vector<string>& tokens) {
        stack<int> st;
        if(tokens.size()==1){
                return stoi(tokens[0]);
            }
        int sum;
        int *p=&sum;
        p=NULL;
        for( auto i: tokens){
            if(i=="+"||i=="-"||i=="*"||i=="/"){
            if(i=="+"){
                int pre=st.top();
                st.pop();
                sum=st.top()+pre;
                st.pop();
                st.push(sum);
            }
            if(i=="*"){
             int pre=st.top();
             st.pop();
             sum=st.top()*pre;
             st.pop();
             st.push(sum);
            }
            if(i=="-"){
             int pre=st.top();
             st.pop();
             sum=st.top()-pre;
             st.pop();
             st.push(sum);
            }
            if(i=="/"){
             int pre=st.top();
             st.pop();
             sum=st.top()/pre;
             st.pop();
             st.push(sum);
            }
            }
            else{
                st.push(stoi(i));
            }
            
        }
        return sum;
    }
};
