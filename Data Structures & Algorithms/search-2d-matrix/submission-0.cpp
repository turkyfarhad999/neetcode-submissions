class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> vec;
        for(auto i : matrix){
        for( int j : i){
           vec.push_back(j);
        }
        cout<<endl;
    }
      return binary_search(vec.begin(),vec.end(),target);
        
    }
};