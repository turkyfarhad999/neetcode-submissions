class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> final;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>nums.size()/3){
                final.insert(nums[i]);
            }
        }
        vector<int>last;
        for(auto i: final){
last.push_back(i);
        }
       return last;
    }
};