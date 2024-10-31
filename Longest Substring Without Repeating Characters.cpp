class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int n = int(s.length()) ;
		int output = 0 ;

		unordered_map<char, int> mp;

		for( int i=0, j=0 ; j<n ; j++){
			if(mp[s[j]] > 0){
				i = max(mp[s[j]], i) ;
			}

			output = max(output, j-i+1) ;
			mp[s[j]] = j+1 ;
		}

		return output ;
	}
};