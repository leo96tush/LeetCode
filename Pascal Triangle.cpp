class Solution {
public:
	vector<vector<int>> generate(int numRows) {

		if(numRows == 1){
			return {{1}} ;
		}

		vector<vector<int>> temp = generate(numRows - 1) ;

		int temp_length = temp.size() ;
		vector<int> temp_last = temp[temp_length-1] ;

		temp_last.push_back(0) ;
		reverse(temp_last.begin() , temp_last.end()) ;
		temp_last.push_back(0) ;

		vector<int> addition ;

		for(int i=1 ; i<temp_last.size() ; i++) {
			addition.push_back(temp_last[i-1] + temp_last[i]) ;
		}

		temp.push_back(addition) ;

		return temp ;


	}
};