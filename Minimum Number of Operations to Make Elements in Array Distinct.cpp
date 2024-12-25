//
// Created by gupta on 25-12-2024.
//

class Solution {
public:
	void print_vector(vector<int> print_vec){
		for(auto number: print_vec) cout << number << " " << endl ;
	}
	int check_distinct(vector<int> vec, int operations) {

		if(vec.size() == 0) return operations ;

		unordered_set<int> temp ;

		for(auto num: vec){
			if(temp.find(num) == temp.end()){
				temp.insert(num) ;
			}
			else {
				if (vec.size() <= 3 ) return operations+1 ;
				else {
					vector<int> new_vec(vec.begin()+3, vec.end()) ;
					return check_distinct(new_vec, operations+1) ;
				}
			}
		}

		return operations ;
	}

	int minimumOperations(vector<int>& nums) {
		return check_distinct(nums, 0) ;
	}
};