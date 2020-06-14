/*
HashMap + Sorting Solution
Time Complexity : O(nlogn)
Space Complexity : O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> low_index , high_index ;

        for ( int i = 0 ; i < nums.size() ; i++ ) {
            low_index[nums[i]] = 1e9 ;
            high_index[nums[i]] = -1e9 ;
        }

        for ( int i = 0 ; i < nums.size() ; i++ ) {
            int k = nums[i] ;
            low_index[k] = min( low_index[k] , i ) ;
            high_index[k] = max( high_index[k] , i ) ;
        }

        sort(nums.begin(), nums.end()) ;

        int start = 0 , end = nums.size() - 1 ;

        while ( start < end ) {
            if ( nums[start] + nums[end] == target ) {
                break ;
            }
            else if ( nums[start] + nums[end] < target ) {
                start++ ;
            }
            else if ( nums[start] + nums[end] > target ) {
                end-- ;
            }
        }
        return {low_index[nums[start]], high_index[nums[end]]} ;
    }
};

/*
Brute Force Solution
Time Complexity : O(n^2)
Space Complexity : O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res ;
        for (int i = 0 ; i < nums.size() ; i++) {
            for (int j = i + 1 ; j < nums.size() ; j++) {
                if (nums[i] + nums[j] == target) {
                    res.emplace_back(i) ;
                    res.emplace_back(j) ;
                    break ;
                }
            }
        }
        return res ;
    }
};