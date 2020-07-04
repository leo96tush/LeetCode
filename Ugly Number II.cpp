class Solution {
public:
	int nthUglyNumber(int n) {
		vector<int> res ;

		res.push_back(1) ;

		int i = 0 , j = 0 , k = 0 , t = n ;

		while (n--) {

			int min1 = 2 * res[i] ;
			int min2 = 3 * res[j] ;
			int min3 = 5 * res[k] ;

			int minm = min(min1, min(min2, min3)) ;

			res.emplace_back(minm) ;

			if (minm == min1) i++ ;
			if (minm == min2) j++ ;
			if (minm == min3) k++ ;
		}

		return res[t - 1] ;
	}
};