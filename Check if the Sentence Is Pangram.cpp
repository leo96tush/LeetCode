/*
Time Complexity : O(n)
Space Complexity : O(1)
*/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<int,bool> mp ;
        
        
        for(int i=0 ; i<sentence.length() ; i++){
            if(mp[sentence[i]-'a']==false)
                mp[sentence[i]-'a'] = true ;
        }
        
        
        for(int i=0 ; i<26 ; i++){
            if( mp[i] == false )
                return false ;
        }
            
            
        return true ;
    }
};
