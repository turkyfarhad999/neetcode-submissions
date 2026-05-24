class Solution {
public:
    int search(vector<int>& nums, int target) {
           if(binary_search(nums.begin(),nums.end(),target)){
       auto it = lower_bound(nums.begin(),nums.end(),target);
       int index=it-nums.begin();
       return index;}
       else{
        return -1;
       }
    }
};
