class Solution {
public:
     vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>final;
         for( int i=0;i<nums.size();i++){
            int sum=1;
            for( int j=0;j<nums.size();j++){
                if(i==j){
                    continue;
                }
                else{
                 sum=sum*nums[j];
                }
            }
            final.push_back(sum);
         }
         return final;
        }
};
