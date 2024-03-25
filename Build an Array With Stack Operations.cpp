class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> result ;
        
        string push_string = "Push", pop_string = "Pop" ;
        
        int i = 0, j = 0 ;
        
        while( i<n && j<n && i<target.size() ){
            
            if(target[i] != j+1){
                result.push_back(push_string) ;
                result.push_back(pop_string) ;
                j++ ;
            }
            else{
                result.push_back(push_string) ;
                i++ ;
                j++ ;
            }
        }
        return result ;
    }
};
