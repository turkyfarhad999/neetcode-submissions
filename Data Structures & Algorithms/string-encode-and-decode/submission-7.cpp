class Solution {
public:
vector<string> st;
string s;
    string encode(vector<string>& strs) {
           for(auto i : strs){
            s+=i+to_string(i.size());
            st.push_back(i);
           }
      return s;
        
            
    }

    vector<string> decode(string s) {
      
       
      return st;
         
    }
};