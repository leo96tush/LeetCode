class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        
        unordered_map<char, vector<int>> index ;
        
        for( int i=0 ; i<s.size() ; i++ ){
            index[s[i]].push_back(i) ;
        }
        
        int max_size = -1 ;
        
        for(auto itr : index){
            char c = itr.first ;
            vector<int> vec = itr.second ;
            if(vec.size() > 1){
                max_size = max(max_size, vec[vec.size()-1] - vec[0] - 1) ;
            }
        }
        
        return max_size ;
    }
};
