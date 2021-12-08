class Solution {
public:
    bool checkZeroOnes(string s) {
        vector<int> vec(s.size(), 0) ;
        
        if(s[0]=='0'){
            vec[0] = -1 ;
        }
        else{
            vec[0] = 1 ;
        }
        
        int max_ones = 0, max_zeros = 0 ;
        
        for(int i=1 ; i<s.size() ; i++){
            if(s[i]=='1'){
                vec[i] = 1 ;
                if(s[i-1]=='1'){
                    vec[i] = vec[i-1] + 1 ;
                }
            }
            else{
                vec[i] = -1 ;
                if(s[i-1]=='0'){
                    vec[i] = vec[i-1] - 1 ;
                }
            }
        }
        
        for(int c : vec){
            if(c < 0){
                max_zeros = max(max_zeros, abs(c)) ;
            }
            else{
                max_ones = max(max_ones, abs(c)) ;
            }
        }
        
        return max_ones > max_zeros ;
    }
};
