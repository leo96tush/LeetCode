class Solution {
public:
    int isPrefix(string a, string b){
        
        if( a.size() < b.size() ){
            return false ;
        }
        
        int i = 0 , j = 0 ;
        
        while(i<b.size()){
            if(a[i]!=b[i]){
                return false ;
            }
            i++ ;
        }
        
        return true ;
        
    }
    
    int isPrefixOfWord(string sentence, string searchWord) {
        
        stringstream ss(sentence) ;
        
        string word = "" ;
        
        vector<string> words ;
        
        while(ss >> word){
            words.push_back(word) ;
        }
        
        int min_index = words.size()+1 ;
        
        for(int i=0 ; i<words.size() ; i++){
            if(isPrefix(words[i], searchWord)==true){
                min_index = min(min_index, i+1) ;
            }
        }
        
        if(min_index == words.size()+1){
            min_index = -1 ;
        }
        
        return min_index ;
    }
};
