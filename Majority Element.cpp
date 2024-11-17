class Solution {
public:
	int majorityElement(vector<int>& nums) {

		int output = -1;
		int freq =  0;

		unordered_map<int, int> mmap ;

		for (auto num : nums) {
			mmap[num]++ ;
		}

		for( auto m: mmap ){
			if(m.second > freq){
				freq = m.second ;
				output = m.first ;
			}
		}

		return output ;

	}
};