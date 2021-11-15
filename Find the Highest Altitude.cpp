/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        
        int size = gain.size() , highest_alt = 0 , current_alt = 0 ;
        
        for(int i=0 ; i<size ; i++){
            current_alt = current_alt + gain[i] ;
            highest_alt = max(highest_alt, current_alt) ;
        }
        
        return highest_alt ;
    }
};
