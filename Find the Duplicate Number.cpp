/*
Floyd Algorithm
Space Complexity : O(1)
Time Complexity : O(n)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0] , fast = nums[0] ;

        do {
            slow = nums[slow] ;
            fast = nums[nums[fast]] ;
        } while (slow != fast) ;

        slow = nums[0] ;

        while (slow != fast) {
            slow = nums[slow] ;
            fast = nums[fast] ;
        }
        return fast ;
    }
};

/*
HashMap Solution
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int , int > mp ;

        for ( int k : nums ) {
            mp[k]++ ;
        }

        for ( auto itr = mp.begin() ; itr != mp.end() ; ++itr ) {
            if (itr->second > 1) return itr->first ;
        }

        return 0 ;
    }
};