class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       set<vector<int>> vec;
       vector<int> v;
       sort(nums.begin(),nums.end());
       for(int i =0;i<nums.size();i++){
        for( int j=i+1;j<nums.size();j++){
            int st=j+1,ed=nums.size()-1;
            while(st<ed){
              long long sum=(long long)nums[i]+nums[j]+nums[st]+nums[ed];
                if(sum==target){
                     v.push_back(nums[i]);
                     v.push_back(nums[j]);
                     v.push_back(nums[st]);
                     v.push_back(nums[ed]);
                    
                     vec.insert(v);
                     v.clear();
                     st++;
                     ed--;
                }
                else if(sum>target){
                    ed--;
                }
                else{
                    st++;
                }
                sum=0;
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