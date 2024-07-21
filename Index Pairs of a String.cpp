class Solution {
public:
    vector<vector<int>> indexPairs(string text, vector<string>& words) {
        
        vector<vector<int>> output ;

        map<char, set<int>> idx_mapping ;

        for(int i=0 ; i<text.size() ; i++){
            idx_mapping[text[i]].insert(i) ;
        }

        for(auto word: words){
            int length = word.size() ;
            set<int> start_indexes = idx_mapping[word[0]] ;
            for( auto itr=start_indexes.begin() ; itr!=start_indexes.end() ; ++itr){
                
                string substring = text.substr(*itr, length) ;


                if (substring == word){
                    int start_index = *itr ;
                    int end_index = start_index+length-1 ;
                    output.push_back({start_index, end_index}) ;
                }
            }
        }

        sort(output.begin(), output.end()) ;

        return  output ;
    }
};
