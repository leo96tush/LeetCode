class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums) {

		vector<int> result ;

		unordered_map<int, bool> mmap ;

		for( auto num: nums ) {
			if( mmap[num] ){
				result.push_back(num) ;
			}
			else {
				mmap[num] = true ;
			}
		}

		return result ;

	}
};