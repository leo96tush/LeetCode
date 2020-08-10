class Solution {
public:
    int titleToNumber(string s) {
        reverse(s.begin(), s.end()) ;

        int result = 0 ;

        long long int pow = 1 ;

        for ( int i = 0 ; i < s.length() ; i++ ) {
            char c = s[i] ;
            int k = (int)(c - 'A' + 1) ;
            result += (k * pow) ;
            pow = pow * 26 ;
        }

        return result ;
    }
};