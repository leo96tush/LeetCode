class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> random ;

        if (nums.size() < 3) return random ;

        set<vector<int>> s ;

        int n = nums.size() ;

        sort(nums.begin(), nums.end()) ;

        for ( int i = 0 ; i < n - 2 ; i++ ) {
            int j = i + 1 ;
            int k = n - 1 ;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k] ;
                if (sum == 0) {
                    vector<int> dummy ;
                    dummy.push_back(nums[i]) ;
                    dummy.push_back(nums[j]) ;
                    dummy.push_back(nums[k]) ;
                    s.insert(dummy);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1]) j++ ;
                    while (j < k && nums[k] == nums[k + 1]) k-- ;
                }
                else if (sum < 0) {
                    j++ ;
                }
                else if (sum > 0) {
                    k-- ;
                }
            }
        }

        vector<vector<int>> res(s.begin(), s.end()) ;
        return res ;
    }
};