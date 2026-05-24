class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> vec;
        vector<int> v;
        sort(nums.begin(),nums.end());
        for( int i =0;i< nums.size();i++){
            int start=i+1,end=nums.size()-1;
            while(start<end){

                int sum=0;
                if(nums[i]+nums[start]+nums[end]==sum){
                     v.push_back(nums[i]);
                     v.push_back(nums[start]);
                     v.push_back(nums[end]);
                    
                     vec.insert(v);
                     v.clear();
                     start++;
                     end--;
                }
                else if(nums[i]+nums[start]+nums[end]>sum){
                    end--;
                }
                else{
                    start++;
                }
            }
        }    
         vector<vector<int>> final;
         for(auto i : vec){
            final.push_back(i);
         }
         
         return final;
    }
};
