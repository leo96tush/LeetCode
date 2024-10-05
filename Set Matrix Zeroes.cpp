class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        bool first_row_zero = false ;
        bool first_col_zero = false ;


        int rows = matrix.size() ;
        int cols = matrix[0].size() ;


        for(int i=0 ; i<cols ; i++){
            if (matrix[0][i] == 0){
                first_row_zero = true ;
            }
        }

        for(int j=0 ; j<rows ; j++){
            if(matrix[j][0] == 0){
                first_col_zero = true ;
            }
        }

        for(int i=1 ; i<rows ; i++){
            for(int j=1 ; j<cols ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0 ;
                    matrix[0][j] = 0 ;
                }
            }
        }

        for(int i=1 ; i<rows ; i++){
            for(int j=1 ; j<cols ; j++){
                if((matrix[i][0] == 0) || (matrix[0][j]==0)){
                    matrix[i][j] = 0 ;
                }
            }
        }

        if(first_row_zero == true){
            for(int j=0 ; j<cols ; j++){
                matrix[0][j] = 0 ;
            }
        }

        if(first_col_zero == true){
            for(int i=0 ; i<rows ; i++){
                matrix[i][0] = 0 ;
            }
        }


    }
};