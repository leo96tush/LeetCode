/*
Time Complexity : O(n) 
Space Complexity : O(Length of String)
*/

class Solution {
public:
    string truncateSentence(string s, int k) {
        
        istringstream ss(s) ;
        
        string word ;
        
        vector<string> words ;
        
        while(ss >> word){
            words.push_back(word) ;
        }
        
        string res ;
        
        for(int i=0 ; i<k ; i++){
            res = res + words[i] + " " ;
        }
        
        res.pop_back() ;
        
        return res ;
    }
};
