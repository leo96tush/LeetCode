/*
Time Complexity : O(nlogn)
Space Complexity : O(1)
*/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        sort(nums.begin(), nums.end()) ;
        reverse(nums.begin(), nums.end()) ;
        
        long long int max_num = nums[0]*nums[1] ;
        long long int min_num = 0 ;
        
        
        int nums_size = nums.size() ;
        
        if(nums[nums_size-1]<0){
            min_num = nums[0]*nums[nums_size-1] ;
        }
        else{
            min_num = nums[nums_size-1]*nums[nums_size-2] ;
        }
        
        return max_num - min_num ;
    }
};
