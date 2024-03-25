class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        
        int value = 40000 ;
        
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==target){
                value = min(value, abs(i-start)) ;
            }
        }
        
        return value ;
    }
};
