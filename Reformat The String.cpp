typedef unordered_map<char, int> umapci ;
typedef unordered_map<string,string> umapss ;
typedef unordered_map<char, int> umapci ;
typedef vector<int> vi ;
typedef vector<char> vc ;
typedef stack<char> sc ;

class Solution {
public:
    string reformat(string s) {
        
        if(s.size()==1){
            return s ;
        }

        sc alphabet ;
        sc alphanumeric ;

        for( int i=0 ; i<s.size() ; i++ ){
            if( s[i]>='0' and s[i]<='9' ){
                alphanumeric.push(s[i]) ;
            }
            else if( s[i]>='a' and s[i]<='z' ){
                alphabet.push(s[i]) ;
            }
        }
        
        
        if( (alphabet.size()>alphanumeric.size()+1) or (alphabet.size()<alphanumeric.size()-1) ){
            return "" ;
        }

        string result = "" ;
        
        if( (alphabet.size() - alphanumeric.size())==1 ){
            result += alphabet.top() ;
            alphabet.pop() ;
            while(alphabet.size()>0 or alphanumeric.size()>0){
                result += alphanumeric.top() ;
                result += alphabet.top() ;
                alphabet.pop() ;
                alphanumeric.pop() ;
            }
        }
        else if( (alphabet.size() - alphanumeric.size())==-1 ){
            result += alphanumeric.top() ;
            alphanumeric.pop() ;
            while(alphabet.size()>0 or alphanumeric.size()>0){
                result += alphabet.top() ;
                result += alphanumeric.top() ;
                alphabet.pop() ;
                alphanumeric.pop() ;
            }
        }
        else{
            while(alphabet.size()>0 or alphanumeric.size()>0){
                result += alphabet.top() ;
                result += alphanumeric.top() ;
                alphabet.pop() ;
                alphanumeric.pop() ;
            }
        }



        return result ;

    }
};
