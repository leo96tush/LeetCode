class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size() != m*n){
            vector<vector<int>> result1 ;    
            return result1 ;
        }
        
        vector<vector<int>> result2 ;
        
        int i=0 ;
        
        while(i<original.size()){
            vector<int> temp ;
            for(int j=0 ; j<n ; j++){
                temp.push_back(original[i]) ;
                i++ ;
            }
            result2.push_back(temp) ;
        }
        
        
        return result2 ;
    }
};
