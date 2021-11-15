/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int calGCD(int a, int b){
        if(b==0){
            return a ;
        }
        return calGCD(b, a%b) ;
    }
    
    int findGCD(vector<int>& nums) {
        
        int length = nums.size() , max_num = 0 , min_num = 1001;
        
        for(int i=0 ; i<length ; i++){
            
            max_num = max(max_num, nums[i]) ;
            min_num = min(min_num, nums[i]) ;
            
        }
        
        return calGCD(max_num, min_num) ;
    }
};
