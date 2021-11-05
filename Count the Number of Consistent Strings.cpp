/*
Time Complexity : O(n)
Space Complexity : O(2*26)
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        
        map<int,bool> base_map ;
        int count = words.size() ;
        
        for( int i=0 ; i<allowed.size() ; i++ ){
            base_map[allowed[i]-'a'] = true ;
        }
        
        for( string word : words ){
            map<int,bool> check_map ;
            
            for(int i=0 ; i<word.size() ; i++){
                check_map[word[i]-'a'] = true ;
            }
            
            for(int i=0 ; i<26 ; i++){
                if( check_map[i]==true && base_map[i]==false ){
                    count-- ;
                    break ;
                }
            }
        }
        
        return count ;
    }
};
