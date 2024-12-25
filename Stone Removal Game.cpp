//
// Created by gupta on 25-12-2024.
//


class Solution {
public:
	string helper(int total, int curr_num, string player) {
		int other_num = curr_num - 1 ;

		if( player == "Alice"  && total < curr_num ) return "Bob" ;
		else if ( player == "Bob" && total < curr_num ) return "Alice" ;
		else if ( player == "Alice" && total >= curr_num ) return helper(total - curr_num, other_num, "Bob") ;
		else if ( player == "Bob" && total >= curr_num ) return helper(total - curr_num, other_num, "Alice") ;

		return "Alice" ;
	}

	bool canAliceWin(int n) {
		if (n < 10) return false ;

		string out = helper(n, 10, "Alice") ;

		if( out == "Alice" ) return true ;
		return false ;

	}
};