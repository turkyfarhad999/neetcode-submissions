class Solution {
public:
     bool isValidSudoku(vector<vector<char>>& board) {
     vector<unordered_set<char>> rows(9);
     vector<unordered_set<char>> colums(9);
     vector<unordered_set<char>> index(9);
     for(int r=0;r<9;r++){
        for(int c=0;c<9;c++){
           char val=board[r][c];
           if(val=='.')continue;
           int sqindex=(r/3)*3+(c/3);
           if(rows[r].count(val)||colums[c].count(val)||index[sqindex].count(val)){
            return false;
           }
             rows[r].insert(val);
             colums[c].insert(val);
             index[sqindex].insert(val);

        }
        
     }
     return true;
    } 
};
