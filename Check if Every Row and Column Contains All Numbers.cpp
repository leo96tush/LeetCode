class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int size = matrix.size() ;
        int row_sum = (size) * (size+1)/2 ;
        int col_sum = (size) * (size+1)/2 ;
        
        set<int> s ;
        for(int i=1 ; i<=matrix.size() ; i++){
            s.insert(i) ;
        }
        
        for(vector<int> temp : matrix){
            int curr_sum = accumulate(temp.begin(), temp.end(), 0) ;
            if( curr_sum != row_sum ){
                return false ;
            }
            
            set<int> s_temp ;
            
            for(int k : temp){
                s_temp.insert(k) ;
            }
            if(s_temp != s){
                return false ;
            }
        }
        
        for(int i=0 ; i<matrix.size() ; i++){
            int curr_sum = 0 ;
            set<int> s_temp ;
            for(int j=0 ; j<matrix[0].size() ; j++){
                curr_sum += matrix[j][i] ;
                s_temp.insert(matrix[i][j]) ;
            }
            if(curr_sum != col_sum || s_temp != s){
                return false ;
            }
        }
        
        return true ;
    }
};
