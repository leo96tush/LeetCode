/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int primary_diagonal = 0 , secondary_diagonal = 0 , result = 0;
        
        int size = mat.size() ;
        
        
        for(int i=0 ; i<mat.size() ; i++){
            primary_diagonal += mat[i][i] ;
        }
        
        for(int i=0 ; i<mat.size() ; i++){
            secondary_diagonal += mat[i][size-i-1] ;
        }
        
        if(size%2 != 0){
            result = primary_diagonal + secondary_diagonal - mat[size/2][size/2] ;
        }
        else{
            result = primary_diagonal + secondary_diagonal ;
        }
        
        return result ;
        
    }
};
