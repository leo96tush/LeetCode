class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int i = 1 ;
        int max_sum = nums[0] ;
        int curr_sum = nums[0] ;
        
        nums.push_back(0) ;
        
        while(i<nums.size()){
            if(nums[i]>nums[i-1]){
                curr_sum += nums[i] ;
                i++ ;
            }
            else{
                max_sum = max(max_sum, curr_sum) ;
                curr_sum = nums[i] ;
                i++ ;
            }
        }
        
        return max_sum ;
    }
};
