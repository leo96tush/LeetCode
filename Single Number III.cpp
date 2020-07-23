/*
Time Complexity : O(n)
Space Complexity : O(1)
*/

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		vector<int> res = {0, 0} ;

		int xor_val = 0 ;

		for ( int k : nums ) {
			xor_val ^= k ;
		}

		xor_val = xor_val & (-xor_val) ;

		for ( int k : nums ) {
			if ((xor_val & k) != 0) {
				res[0] ^= k ;
			}
			else {
				res[1] ^= k ;
			}
		}
		return res ;
	}
};


/*
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
public:
	vector<int> singleNumber(vector<int>& nums) {
		vector<int> res ;
		unordered_map<int, int> mp ;

		for ( int k : nums ) mp[k]++ ;

		for ( int k : nums ) {
			if (mp[k] == 1) res.push_back(k) ;
		}

		return res ;

	}
};