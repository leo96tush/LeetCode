class Solution {
public:
    int countOdds(int low, int high) {
        
        if( (low%2)==0 and (high%2)==0 ){
            return (high-low)/2 ;
        }
        else if( (low%2)!=0 and (high%2)!=0 ){
            return 1 + (high-low)/2 ;
        }
        else if( (low%2)!=0 or (high%2)!=0 ){
            return 1 + (high-low)/2 ;
        }
        
        return 0 ;
    }
};
