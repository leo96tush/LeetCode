class Solution {
public:
    int canType(string word, unordered_set<char> brokenLettersSet){
        for(char c: word){
            
            if(brokenLettersSet.find(c)!=brokenLettersSet.end()){
                return false ;
            }
            
        }
        
        return true ;
    }
    
    int canBeTypedWords(string text, string brokenLetters) {
        istringstream ss(text); 
        string word;
        
        vector<string> words ;
        
        while(ss >> word){
            words.push_back(word) ;
        }
        
        unordered_set<char> brokenLettersSet ;
        
        for(char c: brokenLetters){
            brokenLettersSet.insert(c) ;
        }
        
        int count = 0 ;
        
        for(string word : words){
            if(canType(word, brokenLettersSet)==true){
                count++ ;
            }    
        }
        
        return count ;
        
    }
};
