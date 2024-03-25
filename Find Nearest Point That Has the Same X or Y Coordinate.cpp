class Solution {
public:
    bool isValid(int x, int y, int a, int b){
        if(x==a){
            return true ;
        }
        else if(y==b){
            return true ;
        }
        
        return false ;
    }
    
    int min_index = -1, min_index_value = 20000 ;
    
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        for(int i=0 ; i<points.size() ; i++){
            
            if( isValid(x, y, points[i][0], points[i][1] ) == true ){
                
                int curr_index_value = abs(points[i][0] - x) + abs(points[i][1] - y) ;
                
                if(curr_index_value < min_index_value){
                    min_index_value = curr_index_value ;
                    min_index = i ;
                }
                
            }
            
        }
        return min_index ;
    }
};
