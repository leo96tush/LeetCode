/*
Space Complexity : O(length of string)
Time Complexity : O(number of words)
*/

class Solution {
public:
    string sortSentence(string s) {
        istringstream ss(s) ;
        
        string word ; 
        
        vector<string> words ;
        
        while(ss >> word){
            int n = word.size() ;
            char c = word[n-1] ;
            word.pop_back() ;
            word = c + word ;
            words.push_back(word) ;
        }
        
        sort(words.begin(),words.end()) ;
        
        for( int i=0 ; i<words.size() ; i++ ){
            words[i] = words[i].substr(1) ;
        }
        
        string str = "" ;
        
        for( string s : words ){
           str = str + s + " " ; 
        }
        
        str.pop_back() ;
        
        return str ;
        
    }
};
