/*
Time Complexity : O(n)
Space Complexity : O(n)
*/

class Solution {
	public int numIdenticalPairs(int[] nums) {

		HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>() ;

		Integer n = nums.length , count = 0 ;

		for ( Integer i = 0 ; i < n ; i++ ) {
			if (mp.get(nums[i]) != null) {
				count +=  mp.get(nums[i]) ;
				mp.put(nums[i], 1 + mp.get(nums[i])) ;
			} else {
				mp.put(nums[i], 1) ;
			}
		}

		return count ;
	}
}


/*
Time Complexity : O(n^2)
Space Complexity : O(1)
*/

class Solution {
	public int numIdenticalPairs(int[] nums) {
		Integer count = 0 ;

		for ( Integer i = 0 ; i < nums.length ; i++ ) {
			for ( Integer j = i + 1 ; j < nums.length ; j++ ) {
				if ( nums[i] == nums[j] ) count++ ;
			}
		}

		return count ;
	}
}