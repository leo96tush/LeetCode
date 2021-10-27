/*
Unordered Map Solution
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        unordered_map<int,int> mp ;
        
        int n = nums.size() ;
        
        for( int i=0 ; i<n ; i++ ){
            mp[i] = nums[nums[i]] ;
        }
        
        for( int i=0 ; i<n ; i++ ){
            nums[i] = mp[i] ;
        }
        
        return nums ;
    }
};
