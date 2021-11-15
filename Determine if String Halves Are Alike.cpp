/*
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
    bool halvesAreAlike(string s) {

        int vowels_count1 = 0, vowels_count2 = 0, length = s.size() ;

        string str1 = "" , str2 = "" ;

        str1 = s.substr(0, length/2) ;
        str2 = s.substr(length/2, length/2) ;

        for(int i=0 ; i<str1.size() ; i++){
            if(tolower(str1[i])=='a' || tolower(str1[i])=='e' || tolower(str1[i])=='i' || tolower(str1[i])=='o' || tolower(str1[i])=='u')
                vowels_count1++ ;
        }

        for(int i=0 ; i<str2.size() ; i++){
            if(tolower(str2[i])=='a' || tolower(str2[i])=='e' || tolower(str2[i])=='i' || tolower(str2[i])=='o' || tolower(str2[i])=='u')
                vowels_count2++ ;
        }

        if(vowels_count1==vowels_count2){
            return true ;
        }
        return false ;
    }
};
