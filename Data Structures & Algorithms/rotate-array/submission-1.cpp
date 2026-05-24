class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int target=0;
       while(target<k){
        nums.insert(nums.begin(),nums[nums.size()-1]);
       nums.pop_back();
        target++;
       }
    for( auto i : nums){
        cout<<i<<" ";
    }
    }
};