/*
Two Loop Over the nums
Space Complexity : O(1)
Time Complexity : O(n^2)
*/


class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int n = nums.size(), count = 0 ;
        
        for(int i=0 ; i<n ; i++){
            
            for(int j=i+1 ; j<n ; j++){
                
                if(abs(nums[i]-nums[j])==k)
                    count++ ;
                
            }
            
        }
        
        return count ;
    }
};
