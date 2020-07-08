class Solution {
    public List<List<Integer>> threeSum(int[] nums) {

        List<List<Integer>> random = new ArrayList<>() ;

        if (nums.length < 3) return random ;

        Set<List<Integer>> s = new HashSet<>() ;

        Integer n = nums.length ;
        Arrays.sort(nums) ;


        for ( Integer i = 0 ; i < nums.length - 2 ; i++ ) {
            Integer j = i + 1 ;
            Integer k = n - 1 ;
            while (j < k) {
                List<Integer> dummy = new ArrayList<>() ;
                Integer sum = nums[i] + nums[j] + nums[k] ;
                if (sum == 0) {
                    dummy.add(nums[i]) ;
                    dummy.add(nums[j]) ;
                    dummy.add(nums[k]) ;
                    j++ ; k-- ;
                    s.add(dummy) ;
                    while (j < k && nums[j] == nums[j - 1]) j++ ;
                    while (j < k && nums[k] == nums[k + 1]) k-- ;
                } else if (sum < 0) {
                    j++ ;
                } else if (sum > 0) {
                    k-- ;
                }
            }
        }

        List<List<Integer>> result = new ArrayList<>(s);
        return result ;
    }
}