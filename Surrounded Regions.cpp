class Solution {
public:
    int x_dir[4] = {0, 1, 0, -1} ;
    int y_dir[4] = {1, 0, -1, 0} ;

    bool check( vector<vector<char>>& board , int i , int j ) {
        int rows = board.size() ;
        int cols = board[0].size() ;

        if (i >= 0 && i < rows && j >= 0 && j < cols) return true ;
        return false ;
    }

    void dfs( vector<vector<char>>& board , int i , int j ) {
        board[i][j] = '+' ;
        for ( int k = 0 ; k < 4 ; k++ ) {
            if (check(board, i + x_dir[k], j + y_dir[k]) == true) {
                if (board[i + x_dir[k]][j + y_dir[k]] == 'O') dfs(board, i + x_dir[k], j + y_dir[k]) ;
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        if (board.size() == 0) return ;
        int rows = board.size() , cols = board[0].size() ;

        for ( int i = 0 ; i < rows ; i++ ) {
            for ( int j = 0 ; j < cols ; j++ ) {
                if ( i == 0 || j == 0 || j == cols - 1 || i == rows - 1 ) {
                    if (board[i][j] == 'O') dfs(board, i, j) ;
                }
            }
        }

        for ( int i = 0 ; i < rows ; i++ ) {
            for ( int j = 0 ; j < cols ; j++ ) {
                if (board[i][j] == 'O') {
                    board[i][j] = 'X' ;
                }
                else if (board[i][j] == '+') {
                    board[i][j] = 'O' ;
                }
            }
        }
    }
};