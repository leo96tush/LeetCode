class Solution {
public:
    string removeStartZeros(string number){
        
        unordered_set<char> zeroSet ;
        
        for(char c : number){
            zeroSet.insert(c) ;
        }
        
        if(zeroSet.size()==1 and *zeroSet.begin()=='0'){
            return "0" ;
        }
        
        while(number[0]=='0'){
            
            number = number.substr(1, number.size()-1) ;
            
        }
        
        return number ;
    }
    
    int numDifferentIntegers(string word) {
        
        unordered_set<string> numbers ;
        int i = 0 ;
        
        while(i < word.size()){
            
            if(word[i]>='0' and word[i]<='9'){
                string number_word = "" ;
                while(word[i]>='0' and word[i]<='9' and i<word.size()){
                    number_word += word[i] ;
                    i++ ;
                }
                number_word = removeStartZeros(number_word) ;
                numbers.insert(number_word) ;
            }
            else{
                i++ ;
            }
        }
        
        return numbers.size() ;
    }
};
