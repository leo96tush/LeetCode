class Solution {
    public boolean isPalindrome(String str) {

        String s = str.toLowerCase() ;

        String dummy = "" ;

        for ( Integer i = 0 ; i < s.length() ; i++ ) {
            if ( (s.charAt(i) >= 'a' && s.charAt(i) <= 'z') ) {
                dummy += s.charAt(i) ;
            } else if ( (s.charAt(i) >= '0' && s.charAt(i) <= '9') ) {
                dummy += s.charAt(i) ;
            }
        }

        int i = 0 , j = dummy.length() - 1 ;

        while ( i <= j ) {
            if ( dummy.charAt(i) != dummy.charAt(j) ) {
                return false ;
            }
            i++ ; j-- ;
        }
        return true ;
    }
}