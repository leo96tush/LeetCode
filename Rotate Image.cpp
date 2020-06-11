/*
Flipping along diagonal and Reversing the Rows
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> rotated_matrix ;
        
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        
        for( int i=0 ; i<rows ; i++ ){
            for( int j=0 ; j<i ; j++ ){
                swap(matrix[i][j],matrix[j][i]) ;
            }
        }
        
        for( int i=0 ; i<rows ; i++ ){
            reverse(matrix[i].begin(),matrix[i].end()) ;
        }
        
    }
};

/*
Using Auxillary Matrix
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        vector<vector<int>> rotated_matrix ;
        
        int rows = matrix.size() ;
        int cols = matrix[0].size() ;
        
        for( int j=0 ; j<cols ; j++ ){
            vector<int> dummy ;
            for( int i=rows-1 ; i>=0 ; i-- ){
                dummy.push_back(matrix[i][j]) ;
            }
            rotated_matrix.push_back(dummy) ;
        }
        
        for(int i=0 ; i<rows ; i++){
            for(int j=0 ; j<cols ; j++){
                matrix[i][j] = rotated_matrix[i][j] ;
            }
        }
        
    }
};
