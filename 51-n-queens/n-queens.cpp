class Solution {
public:
    bool isPossible(int row,int col,vector<string>& chessboard,int n){
        for(int j=0;j<n;j++){//rows
            if(chessboard[row][j]=='Q')
               return false;
        }
        for(int i=0;i<n;i++){//col
            if(chessboard[i][col]=='Q')
                return false;
        }
        
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){//left upper diagonal
            if(chessboard[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){//right upper diagonal
            if(chessboard[i][j]=='Q') return false;
        }
       return true;
    
    }
    void FindAns(int row,vector<string>& chessboard,int n,vector<vector<string>>& ans){
        if(row==n){
            ans.push_back(chessboard);
            return ;
        }
        for(int col=0;col<n;col++){
           
                if(isPossible(row,col,chessboard,n)){
                    chessboard[row][col]='Q';
                    FindAns(row+1,chessboard,n,ans);
                    chessboard[row][col]='.';
                }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>chessboard(n, string(n, '.'));
        vector<vector<string>>ans;
        FindAns(0,chessboard,n,ans);
        return ans;
    }
};