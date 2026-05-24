class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>> res;
        for(auto i:strs){
            string s=i;
            sort(s.begin(),s.end());
            res[s].push_back(i);
        }
        vector<vector<string>> final;
        for(auto i:res){
            final.push_back(i.second);
        }
        return final;
    }
};
