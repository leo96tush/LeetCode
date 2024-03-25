typedef unordered_map<char, int> umapci ;
typedef unordered_map<string,string> umapss ;
typedef vector<int> vi ;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        umapci count ;

        for(string word : words){

            for(int i=0 ; i<word.size() ; i++){
                count[word[i]]++ ;
            }

        }
        
        for(auto itr : count){
            if(itr.second%words.size() != 0){
                return false ;
            }
        }

        return true ;
    }
};
