class Solution {
public:
    int countLiveNeighbours( vector<vector<int>>& board , int i , int j ){
        int rows = board.size() ;
        int cols = board[0].size() ;

        int count = 0 ;
        
        if ( i-1 >= 0 && j-1 >= 0 && board[i-1][j-1] == 1 ) count++ ;
        if ( i-1 >= 0 && j+1 <= cols-1 && board[i-1][j+1] == 1 ) count++ ;
        if ( i+1 <= rows-1 && j-1 >= 0 && board[i+1][j-1] == 1 ) count++ ;
        if ( i+1 <= rows-1 && j+1 <= cols-1 && board[i+1][j+1] == 1 ) count++ ;
        if( i-1 >= 0 && board[i-1][j] == 1 ) count++ ;
        if( i+1 <= rows-1 && board[i+1][j] == 1 ) count++ ;
        if( j-1 >= 0 && board[i][j-1] == 1 ) count++ ;
        if( j+1 <= cols-1 && board[i][j+1] == 1 ) count++ ;

        return count ;


    void gameOfLife(vector<vector<int>>& board) {
        
        vector<vector<int>> temp = board ;

        int rows = board.size() ;
        int cols = board[0].size() ;

        for( int i=0 ; i < rows ; i++ ){
            for( int j=0 ; j<cols ; j++ ){
                int count_live = countLiveNeighbours( board , i , j ) ;
                if( board[i][j] == 1 ){
                    if( count_live < 2 ) temp[i][j] = 0 ;
                    else if( count_live == 2 || count_live == 3 ) temp[i][j] = 1 ;
                    else if( count_live > 3 ) temp[i][j] = 0 ;
                }
                else{
                    if( count_live == 3 ) temp[i][j] = 1 ;
                }
            }
        }
        
        board = temp ;
        temp.clear() ;

    }
};