class Solution {
public:
    void sortColors(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        for(int i:nums){
          cout<<i<<" ";
        }  
    }
};