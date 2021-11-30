class Solution {
public:
    string charToInt(char c){
        
        int p = c - 'a' + 1 ;
        
        stringstream num ;
        
        num << p ;
        
        string num_string = num.str() ;
        
        return num_string ;
    }
    
    int stringSum(string s){
        int result = 0 ;
        for(int i=0 ; i<s.size() ; i++){
            result += (s[i]-'0') ;
        }
        return result ;
    }
    
    int getLucky(string s, int k) {
        
        string result = "" ;
        
        for(int i=0 ; i < s.size() ; i++){
            string curr_num = charToInt(s[i]) ;
            result += curr_num ;
        }
        
        string curr = result ;
        int curr_sum = 0 ;
        
        for(int i=0 ; i<k ; i++){
            int curr_sum = stringSum(curr) ;
            curr = to_string(curr_sum) ;
        }
        
        return stoi(curr) ;
        
    }
};
