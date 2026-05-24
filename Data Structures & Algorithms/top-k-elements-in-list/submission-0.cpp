class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>> pp;
        unordered_map<int,vector<int>> res;
        for(auto i: nums){
            res[i].push_back(i);

        }
        for(auto i: res){
            pp.push({i.second.size(),i.first});
        }
        int l=0;
        vector<int>v;
       while(l<k){
   v.push_back(pp.top().second);
   pp.pop();
   l++;
    
    
}

return v; 
    }
};
