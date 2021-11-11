/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i=1 ; i<s.length() ; i=i+2){
            
            s[i] = s[i-1] + ( s[i] - '0' ) ;
            
        }
        
        return s ;
    }
};
