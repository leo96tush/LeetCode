class Solution {
public:
    bool isPalindrome(string s) {
        string dummy = "" ;

        for ( int i = 0 ; i < s.length() ; i++ ) {
            if ( (s[i] >= 'a' && s[i] <= 'z') ) {
                dummy += s[i] ;
            }
            else if ( (s[i] >= 'A' && s[i] <= 'Z') ) {
                dummy += tolower(s[i]) ;
            }
            else if ( (s[i] >= '0' && s[i] <= '9') ) {
                dummy += s[i] ;
            }
        }

        int i = 0 , j = dummy.length() - 1 ;

        while ( i <= j ) {
            if ( dummy[i] != dummy[j] ) {
                return false ;
            }
            i++ ; j-- ;
        }
        return true ;
    }
};