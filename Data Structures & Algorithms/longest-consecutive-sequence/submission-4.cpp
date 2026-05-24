class Solution {
    public:
     int longestConsecutive(vector<int>& nums) {
        set<int> s;
        int count=1;
        if(nums.empty())return 0;
        for(auto i: nums){
         s.insert(i);
        } 
        vector<int>final;
        for(auto i: s){
            final.push_back(i);
        }
        int max=1;
        for(int i=0;i<final.size()-1;i++){
            if(final[i+1]-final[i]==1){
              
              count++;
              if(count>max){
                max=count;
              }
            }else{
              count=1;  
            }
            
        }
       
        return max;
    }
    };

