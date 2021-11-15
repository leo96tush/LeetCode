/*
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int char_stop = 0 ;
        
        for(int i=0 ; i<word.size() ; i++){
            
            if( word[i]==ch ){
                char_stop = i ;
                
                break ;
            }
            
            
        }
        
        string str1 = "" , str2 = "" , str3 = "";
        
        str1 = word.substr(0, char_stop+1) ;
        reverse(str1.begin(), str1.end()) ;
        
        int len1 = str1.length() ;
        int len2 = word.length() - len1 ;
        
        str2 = word.substr(char_stop+1, len2) ;
        
        return str1+str2 ;
        
    }
};
