/*

Space Complexity : O(1)
Time Complexity : O(n)

*/

class Solution {
public:
    bool allUpperCase(string word) {
        for ( int i = 0 ; i < word.length() ; i++ ) {
            if ( !(word[i] >= 'A' && word[i] <= 'Z') ) {
                return false ;
            }
        }
        return true ;
    }

    bool allLowerCase(string word) {
        for ( int i = 0 ; i < word.length() ; i++ ) {
            if ( !(word[i] >= 'a' && word[i] <= 'z') ) {
                return false ;
            }
        }
        return true ;
    }

    bool firstUpperCase(string word) {
        for ( int i = 0 ; i < word.length() ; i++ ) {
            if ( i == 0 && !(word[i] >= 'A' && word[i] <= 'Z') ) {
                return false ;
            }
            if ( i != 0 && !(word[i] >= 'a' && word[i] <= 'z') ) {
                return false ;
            }
        }
        return true ;
    }

    bool detectCapitalUse(string word) {
        return (allUpperCase(word) == true || allLowerCase(word) == true || firstUpperCase(word) == true) ;
    }
};