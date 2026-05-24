class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>final;
        for(int i =0;i<m;i++){
            final.push_back(nums1[i]);
        }
        for(int i =0;i<n;i++){
            final.push_back(nums2[i]);
        }
        nums1.clear();
        sort(final.begin(),final.end());
        for(int i =0;i<final.size();i++){
   nums1.push_back(final[i]);
        }
    }
};