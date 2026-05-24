class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string v="";
         if(strs.size()==1){
        v+=strs[0];
        return v;
      }
    for(int i=0;i<strs[0].size();i++){
      for(int j=0;j<strs.size()-1;j++){
        if(i>=strs[j].size()||i>=strs[j+1].size()||strs[j][i]!=strs[j+1][i]){
            return v;
        }
        
      }
      v+=strs[0][i];
    }
    }
};