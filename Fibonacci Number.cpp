class Solution {
public:
	unordered_map<int, int> fib_map ;

	int fib(int n) {
		if( n == 1 || n == 0) {
			fib_map[n] = n ;
			return n ;
		}

		if(fib_map.find(n) == fib_map.end()){
			fib_map[n] = fib(n-1) + fib(n-2) ;
		}

		return fib_map[n] ;

	}
};