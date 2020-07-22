/*
Time Complexity : O(n)
Space Complexity : O(n)
Single Scan
*/

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		unordered_map<int, int> mp ;

		int n = nums.size() ;

		int count = 0 ;

		for ( int i = 0 ; i < n ; i++ ) {
			if (mp[nums[i]]) {
				count +=  mp[nums[i]] ; mp[nums[i]]++ ;
			}
			else {
				mp[nums[i]]++ ;
			}
		}

		return count ;
	}
};

/*
Time Complexity : O(n)
Space Complexity : O(n)
Two Scans
*/

class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {
		unordered_map<int, int> mp ;

		int n = nums.size() ;

		for ( int i = 0 ; i < n ; i++ ) {
			mp[nums[i]]++ ;
		}

		int count = 0 ;

		for ( auto itr = mp.begin() ; itr != mp.end() ; ++itr ) {
			int k = itr->second ;
			count += k * (k - 1) / 2 ;
		}

		return count ;
	}
};


/*
Time Complexity : O(n^2)
Space Complexity : O(1)
*/


class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {

		int count = 0 ;

		for ( int i = 0 ; i < nums.size() ; i++ ) {
			for ( int j = i + 1 ; j < nums.size() ; j++ ) {
				if (nums[i] == nums[j]) count++ ;
			}
		}
		return count ;
	}
};