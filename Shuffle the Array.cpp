class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> dummy ;

        int i = 0 , j = n , k = 0 ;

        while (k < n) {
            dummy.push_back(nums[i]) ; i++ ;
            dummy.push_back(nums[j]) ; j++ ;
            k++ ;
        }

        return dummy ;
    }
};