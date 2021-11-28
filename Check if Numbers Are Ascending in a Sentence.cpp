class Solution {
public:
    bool isNumber(string str){
        
        for(char c : str){
            if(c<'0'|| c>'9'){
                return false ;
            }
        }
        return true ;
    }
    
    
    bool areNumbersAscending(string s) {
        
        stringstream ss(s) ;
        
        vector<string> words ;
        string word ;
        
        while(ss >> word){
            words.push_back(word) ;
        }

        
        int previous_num = -1 , current_num = -1 ;
        
        for( int i=0 ; i<words.size() ; i++ ){

            if(isNumber(words[i])){
                if( previous_num < 0 && current_num < 0 ){
                    previous_num = stoi(words[i]) ;
                    current_num = stoi(words[i]) ;
                }
                else{
                    current_num = stoi(words[i]) ;
                    if( previous_num >= current_num ){
                        return false ;
                    }
                    else{
                        previous_num = current_num ;
                    }
                }
            }
        }
        
        
        return true ;
        
    }
};
