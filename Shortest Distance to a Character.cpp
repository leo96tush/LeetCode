class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        int n = s.length() ;
        vector<int> result(n,0) ;
        
        
        int i = 0 ;
        
        while( s[i]!= c ){
            i++ ;
        }
        
        while( i<n ){
            
            if( s[i]==c ){
                result[i] = 0 ;
            }
            else{
                result[i] = result[i-1] + 1 ;
            }
            i++ ;
        }
        
        
        i = n ;
        
        while( s[i]!=c ){
            i-- ;
        }
        
        while( i>=0 ){
            
            if( s[i]==c ){
                result[i] = 0 ;
            }
            else if( result[i]==0 ) {
                result[i] = result[i+1] + 1 ;
            }
            else{
                result[i] = min(result[i], result[i+1] + 1) ;
            }
            i-- ;
        }
        
        return result  ;
        
    }
};
