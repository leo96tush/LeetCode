class Solution {
public:
	vector<string> output ;
	vector<string> letterCombinations(string digits) {

		unordered_map<char, vector<char>> char_map ;

		char_map['2'] = {'a', 'b', 'c'} ;
		char_map['3'] = {'d', 'e', 'f'} ;
		char_map['4'] = {'g', 'h', 'i'} ;
		char_map['5'] = {'j', 'k', 'l'} ;
		char_map['6'] = {'m', 'n', 'o'} ;
		char_map['7'] = {'p', 'q', 'r', 's'} ;
		char_map['8'] = {'t', 'u', 'v'} ;
		char_map['9'] = {'w', 'x', 'y', 'z'} ;

		if(digits.size() == 0){
			return output ;
		}

		int size = digits.size() ;
		char c = digits[0] ;

		vector<char> chars = char_map[c] ;

		if(output.size() == 0) {
			for( auto t: chars) {
				string s = "" ;
				s = s+t ;
				output.push_back(s) ;
			}
		}
		else {
			vector<string> temp ;
			for(auto out: output) {
				for( auto chr: chars) {
					temp.push_back(out+chr) ;
				}
			}
			output = temp ;
		}

		return  letterCombinations(digits.substr(1, digits.size()));

	}
};