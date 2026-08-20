class Solution {
public:
    bool isPossible(int index,int row,int col,vector<vector<char>>& board){
        //check row
        for(int j=0;j<9;j++){
            if(board[row][j]-'0'==index){
                return false;
            }
        }
        //check col
        for(int i=0;i<9;i++){
            if(board[i][col]-'0'==index){
                return false;
            }
        }
        //check that 3*3 box
        int rp=row%3;
        int cp=col%3;
        rp=row-rp;
        cp=col-cp;
        // //first row
        // for(int j=cp;j<=cp+2;j++){
        //     if(board[rp][j]-'0'==index)
        //          return false;
        // }
        // //second row
        // for(int j=cp;j<=cp+2;j++){
        //     if(board[rp+1][j]-'0'==index)
        //          return false;
        // }
        // //third row
        // for(int j=cp;j<=cp+2;j++){
        //     if(board[rp+2][j]-'0'==index)
        //          return false;
        // }
        for(int j=cp;j<=cp+2;j++){
            for(int i=0;i<=2;i++){
            if(board[rp+i][j]-'0'==index)
                 return false;
            }
        }

        return true;



    }
    bool Solver(vector<vector<char>>& board){
            for(int row=0;row<9;row++){
                for(int col=0;col<9;col++){
                    if(board[row][col]!='.') continue;
                    for(int i=1;i<=9;i++){
                        if(isPossible(i,row,col,board)){
                            board[row][col]=i+'0';
                            if(Solver(board)==true) return true;
                        else{
                            board[row][col]='.';
                        }
                        }
                    }
                    return false;
    
                }
            }
            return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        Solver(board);
    }
};