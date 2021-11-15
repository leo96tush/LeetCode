/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        unordered_map<int,int> mp ;
        int size = rectangles.size() ;
        
        
        for( int i=0 ; i<rectangles.size() ; i++ ){
            
            vector<int> curr_rect = rectangles[i] ;
            int min_length = min(curr_rect[0], curr_rect[1]) ;
            mp[min_length]++ ;
            
        }
        
        int max_num = 0 , max_len = 0 ;
        
        for(auto itr=mp.begin() ; itr!=mp.end() ; ++itr){
            if(itr->first>=max_len){
                max_num = itr->second ;
                max_len = itr->first ;
            }
        }
        
        return max_num ;
    }
};
