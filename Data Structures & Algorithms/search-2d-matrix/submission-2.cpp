class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0;
        
        int rows=matrix.size();
        int colums=matrix[0].size();
        int colum=colums-1;
        while(row<rows && colum>-1){
            if(matrix[row][colum]>target){
                colum--;
            }
            else if(matrix[row][colum]<target){
                row++;
            }
            else if(matrix[row][colum]==target){
                return true;
            }
            else {
                return false;
            }
        }
        return false;
    }
};