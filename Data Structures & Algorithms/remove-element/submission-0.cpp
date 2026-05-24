class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
              vector<int> v;
      for(int i : nums){
        if(i!=val){
            v.push_back(i);
        }
      }
      nums.erase(nums.begin(),nums.end());
      for(int i=0;i<v.size();i++){
        nums.push_back(v[i]);
      }

    
      
      return nums.size();
    }
};