/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int no_of_ops = 0, k = 0 ;
        
        if(nums.size()==1){
            return no_of_ops ;
        }
        
        for( int i=1 ; i<nums.size() ; i++ ){
            
            if(nums[i]<=nums[i-1]){
                k = nums[i-1]+1 ;
                no_of_ops += (k - nums[i]) ;
                nums[i] = k ;
            }
        }
        
        return no_of_ops ;
    }
};
