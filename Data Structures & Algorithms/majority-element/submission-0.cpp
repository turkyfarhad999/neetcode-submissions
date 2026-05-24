class Solution {
public:
    int majorityElement(vector<int>& nums) {
            int count=0;
          int maxval=0;
          int max;
          for(int i=0;i<nums.size();i++){
             int count=0;
            for(int j=0;j<nums.size();j++){
              
              if(nums[i]==nums[j]){
                count++;
                if(count>maxval){
                  maxval=count;
                  max=nums[i];
                }
              }
            }
          }
          return max;
    }
};