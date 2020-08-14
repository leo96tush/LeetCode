class Solution {
public:
	int longestPalindrome(string s) {

		unordered_map<int, int> mp ;

		for ( int i = 0 ; i < s.length() ; i++ ) {
			mp[s[i]]++ ;
		}

		int length = 0 , max_odd_length = 0 ;

		char max_odd_char ;

		for ( auto itr = mp.begin() ; itr != mp.end() ; ++itr ) {
			if (itr->second % 2 == 0) {
				length += (itr->second) ;
			}
			else {
				if (itr->first > max_odd_length) {
					max_odd_length = max(itr->second, max_odd_length) ;
					max_odd_char = itr->first ;
				}
			}
		}

		for ( auto itr = mp.begin() ; itr != mp.end() ; ++itr ) {
			if (itr->second % 2 != 0) {
				if (itr->first != max_odd_char) {
					length += ( (itr->second) - 1 ) ;
				}
				else {
					length += itr->second ;
				}
			}
		}

		return length ;
	}
};