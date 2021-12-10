class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> vec(2052, 0) ;
        
        for(vector<int> log : logs){
            int a = log[0] ;
            int b = log[1] ;
            
            vec[a]++ ;
            vec[b]-- ;
            
        }
        
        int max_size = 0, year = 0  ;
        
        for(int i=1 ; i<vec.size() ; i++){
            vec[i] += vec[i-1] ;
            if(vec[i] > max_size){
                max_size = vec[i] ;
                year = i ;
            }
        }
        
        return year ;
    }
};
