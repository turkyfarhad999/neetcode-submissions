class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=0;
        int row=matrix.size();
        int colums=matrix[0].size()-1;
        cout<<colums<<endl;
        for(int i=0;i<row;i++){
           if(target>=matrix[rows][0]&&target<=matrix[rows][colums]){
            return binary_search(matrix[rows].begin(),matrix[rows].end(),target);
           }
           else{
            rows++;
           }
        }
        return false;
        
    }
};