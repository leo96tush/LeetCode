class Solution {
	public int[] shuffle(int[] nums, int n) {
		int[] result = new int[2 * n] ;

		int k = 0 , i = 0 , j = n ;

		while (k < 2 * n) {
			result[k] = nums[i] ; i++ ; k++ ;
			result[k] = nums[j] ; j++ ; k++ ;
		}

		return result ;

	}
}