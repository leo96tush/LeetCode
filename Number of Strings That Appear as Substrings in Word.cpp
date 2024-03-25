/*
Time Complexity : O(n^2)
Space Complexity : O(n^2)
*/

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        
        unordered_set<string> string_set ;
        
        for(int i=0 ; i<word.size() ; i++){
            for(int j=1 ; j<=word.size()-i ; j++){
                
                string sub_str = word.substr(i,j) ;
                string_set.insert(sub_str) ;
            }
        }
        
        int count = 0 ;
        
        for(string s : patterns){
            if(string_set.find(s)!=string_set.end()){
                count++ ;
            }
        }
        
        return count ;
    }
};
