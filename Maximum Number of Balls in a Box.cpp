/*
Time Complexity : O((highLimit-lowLimit) * log(highLimit))
Space Complexity : O(highLimit-lowLimit)
*/

class Solution {
public:
    int digitSum(int k){
        
        if(k==0){
            return 0 ;
        }
        
        return (k%10)+digitSum(k/10) ;    
    }
    
    int countBalls(int lowLimit, int highLimit) {
        
        unordered_map<int,int> mp ;
        
        for(int i=lowLimit ; i<=highLimit ; i++){
            mp[digitSum(i)]++ ;
        }
        
        int max_num = -1 ;
        
        for(auto itr: mp){
            max_num = max(max_num, itr.second) ;
        }
        
        return max_num ;
    }
};
