/*
Simple Array
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int n = nums.size() ;
        
        vector<int> result(2*n, 0) ;
        
        
        for( int i=0 ; i<2*n ; i++ ){
            
            if( i<n ){
                result[i] = nums[i] ;
            }
            else{
                result[i] = nums[i-n] ;
            }
            
        }
        
        return result;
        
    }
};
