/*
Sorting the Array + Last two numbers
Time Complexity : O(nlogn)
Space Complexity : O(n)
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        
        int n = nums.size() ;
        
        return (nums[n-1] - 1) * (nums[n-2] -1) ;
        
    }
};
