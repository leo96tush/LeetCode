/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int minRotationTime(char curr, char next){
        
        if(curr==next){
            return 0 ;
        }
        else if(next-'a'>curr-'a'){
            int clockwise_time = abs(next-curr) ;
            int anti_clockwise_time = abs('z'-next) + abs(curr-'a') + 1 ;
            return min(clockwise_time, anti_clockwise_time) ;
        }
        else{
            int anti_clockwise_time = abs(next-curr) ;
            int clockwise_time = abs('z'-curr) + abs(next-'a') + 1 ;
            return min(clockwise_time, anti_clockwise_time) ;
        }
    }
    
    int minTimeToType(string word) {
        int total_time = 0 ;
        int rotation_time = 0 ;
        int char_num_time = word.size() ;
        
        word = 'a'+ word ;
        
        for(int i=1 ; i<word.size() ; i++){
            total_time += minRotationTime(word[i-1], word[i]) ;
        }
        
        return total_time + char_num_time ;
        
    }
};
