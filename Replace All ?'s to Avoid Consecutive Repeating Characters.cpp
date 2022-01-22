class Solution {
public:
    string modifyString(string s) {
        
        for(int i=0 ; i<s.size() ; i++){
            
            if(s[i]=='?'){
                
                if(i==0){
                    char next = s[i+1] ;
                    if(next == 'a'){
                        s[i] = 'b' ;
                    }
                    else{
                        s[i] = 'a' ;
                    }
                }
                else if(i==s.size()-1){
                    char prev = s[i-1] ;
                    if(prev == 'a'){
                        s[i] = 'b' ;
                    }
                    else{
                        s[i] = 'a' ;
                    }
                }
                else{
                    char prev = s[i-1] ;
                    char next = s[i+1] ;
                    
                    for(int j=0 ; j<26 ; j++){
                        s[i] = char('a' + j) ;
                        if((s[i] != s[i-1]) and (s[i] != s[i+1])){
                            break ;
                        }
                    }
                }
                
            }
            
        }
        
        return s ;
    }
};
