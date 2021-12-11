typedef unordered_map<char, int> umapci ;
typedef unordered_map<string,string> umapss ;
typedef vector<int> vi ;

class Solution {
public:
    string thousandSeparator(int n) {
        
        string result = "" ;
        int i = 0 ;
        
        if(n==0){
            return "0" ;
        }

        while(n>0){
            int curr_num = 0 ;
            curr_num = n%10 ;
            result += to_string(curr_num) ;
            i++ ;
            if(i%3==0){
                result += '.' ;
            }
            n = n/10 ;
        }
        
        reverse(result.begin(), result.end()) ;
        
        if(result[0]=='.'){
            int size = result.size() ;
            result = result.substr(1, size-1) ;
        }
        
        return  result ;
    }
};
