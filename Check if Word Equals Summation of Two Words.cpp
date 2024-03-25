/*
Space Complexity : O(3)
Time Complexity : O(max(len(firstWord) , len(secondWord) , len(targetWord))
*/

class Solution {
public:
    int numVal(char chr){
        return (chr - 'a') ;    
    }
    
    char alphaVal(int num){
        return char(int('a') + num) ;    
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        reverse(firstWord.begin(), firstWord.end()) ;
        reverse(secondWord.begin(), secondWord.end()) ;
        reverse(targetWord.begin(), targetWord.end()) ;
        
        int first_num = 0 ;
        for(int i=0 ; i<firstWord.size() ; i++){
            first_num += ( numVal(firstWord[i]) * pow(10,i) ) ;
        }
        
        int second_num = 0 ;
        for(int i=0 ; i<secondWord.size() ; i++){
            second_num += ( numVal(secondWord[i]) * pow(10,i) ) ;
        }
        
        int target_num = 0 ;
        for(int i=0 ; i<targetWord.size() ; i++){
            target_num += ( numVal(targetWord[i]) * pow(10,i) ) ;
        }
        
        return (target_num==(first_num+second_num)) ;
    }
};
