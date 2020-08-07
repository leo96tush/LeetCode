class Solution {
	public double logn(Integer num, Integer base) {
		return (Math.log(num)) / (Math.log(base)) ;
	}

	public boolean isPowerOfFour(int num) {
		if (num == 0) return false ;
		return Math.ceil(logn(num, 4)) == Math.floor(logn(num, 4)) ;
	}
}