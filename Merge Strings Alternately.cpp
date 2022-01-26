class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string result = "" ;
        
        int i = 0, j = 0 ;
        
        while( i < min(word1.size(), word2.size()) ){
            result += word1[i] ;
            result += word2[i] ;
            i++ ;
            j++ ;
        }
        
        int min_length = min(word1.size(), word2.size()) ;
        int max_length = max(word1.size(), word2.size()) ;
        
        if( word1.size() == max_length ){
            while( j < word1.size() ){
                result += word1[j] ;
                j++ ;
            }
        }
        else{
            while( j < word2.size() ){
                result += word2[j] ;
                j++ ;
            }
        }
        
        return result ;
    }
};
