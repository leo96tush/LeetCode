class Solution {
public:
    int maxDistance(vector<int>& colors) {
            unordered_map<int, int> min_map ;
            unordered_map<int, int> max_map ;
            
            for(int i=0 ; i<colors.size() ; i++){
                max_map[colors[i]] = 0 ;
            }
        
            for(int i=colors.size()-1 ; i>=0 ; i--){
                min_map[colors[i]] = colors.size()-1  ;
            }

        
            for(int i=0 ; i<colors.size() ; i++){
                min_map[colors[i]] = min(i, min_map[colors[i]]) ;
                max_map[colors[i]] = max(i, max_map[colors[i]]) ;
            }

            
            
            int max_diff = 0 ;
            
            for(auto itr1 : min_map){
                for(auto itr2 : max_map){
                    if(itr1.first != itr2.first){
                        max_diff = max(max_diff, abs(itr1.second - itr2.second)) ;
                    }
                }
            }
            return max_diff ;
    }
};
