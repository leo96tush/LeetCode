class Solution {
public:
    bool isSingleRow(string word){
        
        unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'} ;
        unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l'} ;
        unordered_set<char> row3 = {'z','x','c','v','b','n','m'} ;
        
        bool row1_ = false , row2_ = false , row3_ = false ;
        
        for(char c : word){
            c = tolower(c) ;
            if(row1.find(c)!=row1.end()){
                row1_ = true ;
            }
            else if(row2.find(c)!=row2.end()){
                row2_ = true ;
            }
            else if(row3.find(c)!=row3.end()){
                row3_ = true ;
            }
        }
        
        if( row1_ and !(row2_) and !(row3_) ){
            return true ;
        }
        
        if( !(row1_) and row2_ and !(row3_) ){
            return true ;
        }
        
        if( !(row1_) and !(row2_) and row3_ ){
            return true ;
        }
        
        return false ;
        
    }
    
    vector<string> findWords(vector<string>& words) {
        vector<string> result ;
        
        for(string word : words){
            if(isSingleRow(word)==true){
                result.push_back(word) ;
            }
        }
        return result ;
    }
};
