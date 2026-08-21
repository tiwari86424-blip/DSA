class Solution {
public:
    bool isPossible(int row,int col,vector<vector<char>> & board){
        char val=board[row][col];
        for(int j=0;j<9;j++){//check for row
           if(j==col) continue;
           if(board[row][j]==val){
            return false;
           }
        }
        for(int i=0;i<9;i++){//check for col
           if(i==row) continue;
           if(board[i][col]==val){
            return false;
           }
        }

        int rp=row%3;
        int cp=col%3;
        rp=row-rp;
        cp=col-cp;
        for(int j=0;j<=2;j++){
            for(int i=rp;i<=rp+2;i++){
                if((i==row) && (j+cp==col)) continue;
                if(board[i][j+cp]==val) return false;
            }
        }
        return true;
    }
    bool solver(vector<vector<char>>& board){
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                if(board[row][col]=='.') continue;
                if(!(isPossible(row,col,board))){
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        return solver(board);
    }
};