/*
Bitmasking Solution
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
	int singleNumber(vector<int>& nums) {

		int ones = 0, twos = 0;
		for (auto i : nums) {
			ones = (ones ^ i) & (~twos);
			twos = (twos ^ i) & (~ones);
		}
		return ones;
	}
};


/*
Bitmasking Solution
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		unordered_map<int, int> mp ;

		for ( int k : nums ) mp[k]++ ;

		for ( auto itr = mp.begin() ; itr != mp.end() ; ++itr ) {
			if (itr->second == 1) return itr->first ;
		}

		return 0 ;
	}
};
