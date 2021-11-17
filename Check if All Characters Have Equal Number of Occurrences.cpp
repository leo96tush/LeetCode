/*
Time Complexity : O(n)
Space Complexity : O(distint characters in the string)
*/


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        unordered_map<char,int> mp ;
        
        for(char c : s){
            mp[c]++ ;
        }
        
        int count = mp[s[0]] ;
        
        for(auto itr: mp){
            if(itr.second!=count){
                return false ;
            }
        }
        
        return true ;
    }
};
