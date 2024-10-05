class Solution {
public:
    int scoreOfString(string s) {
        
        int s_length = s.size() ;
        
        int output = 0 ;

        for(int i=0 ; i<s_length-1 ; i++){
            if( int(s[i]) - int(s[i+1]) > 0 ){
                output += ( int(s[i]) - int(s[i+1]) ) ;
            }
            else{
                output += ( int(s[i+1]) - int(s[i]) ) ;
            }
        }

        return output ;

    }
};