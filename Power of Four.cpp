class Solution {
public:
	float logn(int n, int k) {
		return log(n) / log(k) ;
	}

	bool isPowerOfFour(int num) {
		if (num == 0) return false ;
		return ceil(logn(num, 4)) == floor(logn(num, 4)) ;
	}
};