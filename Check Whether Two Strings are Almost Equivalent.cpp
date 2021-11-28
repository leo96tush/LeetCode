class Solution {
public:
    unordered_map<char,int> getCount(string word){
        unordered_map<char,int> count ;
        
        for(int i=0 ; i<word.size() ; i++){
            count[word[i]]++ ;
        }
        
        return count ;
    } 
        
    bool checkAlmostEquivalent(string word1, string word2) {
        
        unordered_map<char, int> mp1 = getCount(word1) ;
        unordered_map<char, int> mp2 = getCount(word2) ;
        
        for(auto itr : mp1){
            if( abs(itr.second - mp2[itr.first]) > 3 ){
                return false ;
            }
        }
        
        for(auto itr : mp2){
            if( abs(itr.second - mp1[itr.first]) > 3 ){
                return false ;
            }
        }
        
        return true ;
    }
};
