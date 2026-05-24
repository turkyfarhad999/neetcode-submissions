class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxv=0;
        for(int i =0;i<s.size();i++){
           unordered_set<char> st;
           int left=0;
           for(int i =0;i<s.size();i++){
            while(st.find(s[i])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            maxv=max(maxv,i-left+1);
           }
          
    }
    return maxv;
} 
};
