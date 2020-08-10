class Solution {
    public int titleToNumber(String s) {
        StringBuilder dummy = new StringBuilder(s) ;
        dummy.reverse() ;

        int result = 0 ;

        int pow = 1 ;

        for ( int i = 0 ; i < dummy.length() ; i++ ) {
            char c = dummy.charAt(i) ;
            result += pow * ((int)(c - 'A' + 1)) ;
            pow = pow * 26 ;
        }
        return result ;
    }
}
