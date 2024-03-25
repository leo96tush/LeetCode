class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        
        vector<int> left_sum ;
        left_sum.push_back(0) ;
        
        for(int i=0 ; i<nums.size() ; i++){
            left_sum.push_back(left_sum[i]+nums[i]) ;
        }
        
        vector<int> right_sum ;
        reverse(nums.begin(), nums.end()) ;
        
        right_sum.push_back(0) ;
        
        for(int i=0 ; i<nums.size() ; i++){
            right_sum.push_back(right_sum[i]+nums[i]) ;
        }
        
        reverse(right_sum.begin(), right_sum.end()) ;
        reverse(nums.begin(), nums.end()) ;
        
        
        for(int i=0 ; i<nums.size() ; i++){
            int left = left_sum[i] ;
            int right = right_sum[i+1] ;
            if(left==right){
                return i ;
            }
            
        }
        return -1 ;
    }
};
