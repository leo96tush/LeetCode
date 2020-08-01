class Solution {
    public boolean allUpperCase(String word) {
        for ( int i = 0 ; i < word.length() ; i++ ) {
            if ( !(word.charAt(i) >= 'A' && word.charAt(i) <= 'Z') ) {
                return false ;
            }
        }
        return true ;
    }

    public boolean allLowerCase(String word) {
        for ( int i = 0 ; i < word.length() ; i++ ) {
            if ( !(word.charAt(i) >= 'a' && word.charAt(i) <= 'z') ) {
                return false ;
            }
        }
        return true ;
    }

    public boolean firstUpperCase(String word) {
        for ( int i = 0 ; i < word.length() ; i++ ) {
            if ( i == 0 && !(word.charAt(i) >= 'A' && word.charAt(i) <= 'Z') ) {
                return false ;
            }
            if ( i != 0 && !(word.charAt(i) >= 'a' && word.charAt(i) <= 'z') ) {
                return false ;
            }
        }
        return true ;
    }

    public boolean detectCapitalUse(String word) {
        return (allUpperCase(word) == true || allLowerCase(word) == true || firstUpperCase(word) == true) ;
    }
}