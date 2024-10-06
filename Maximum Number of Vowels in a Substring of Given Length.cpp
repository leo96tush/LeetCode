class Solution {
public:
    bool isVowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ;
    }
    int maxVowels(string s, int k) {
        
        vector<int> dp(s.size()+1,0) ;

        for(int i=1 ; i<=s.size() ; i++){
            dp[i] = dp[i-1] + isVowel(s[i-1]) ;
        }

        int max = 0 ;
        for(int i=k ; i<=s.size() ; i++){
            max_size = max(max_size,dp[i]-dp[i-k]) ;
        }

        return max_size ;
        
    }
};