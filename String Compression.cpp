class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<string> temp ;

        if(chars.size() < 1){
            return 0 ;
        }

        chars.push_back(' ') ;

        string temp_string = "" ;
        temp_string += chars[0] ;

        for(int i=1 ; i<chars.size() ; i++){
            if(chars[i] == chars[i-1]){
                temp_string += chars[i] ;
            }
            else{
                temp.push_back(temp_string) ;
                temp_string = "" ;
                temp_string += chars[i] ;
            }
        }

        string out = "" ;

        for(auto s: temp){
            if(s.size() == 1){
                out += s ;
            }
            else{
                out += s[0] ;
                out += to_string(s.size()) ;
            }
        }

        for(int i=0 ; i<out.size() ; i++){
            chars[i] = out[i] ;
        }

        return out.size() ;
    }
};