/*
### Complexity Analysis:
1. Time Complexity:
   - Sorting: O(n log n)
   - Iteration: O(n)
   - Overall: O(n log n)

2. Space Complexity:
   - Sorting uses O(1) additional space (or O(n) if counting sort is used for very small numbers).
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // If the input vector is empty, return 0
        if(nums.size() == 0) return 0;

        // Sort the vector to bring consecutive elements together
        sort(nums.begin(), nums.end());

        // Initialize max_count to keep track of the longest sequence
        // Initialize count to keep track of the current sequence length
        int max_count = 1, count = 1;

        // Iterate through the sorted vector starting from the second element
        for(int i = 1; i < nums.size(); i++) {
            // If the current element is the same as the previous one, skip it
            if(nums[i] == nums[i-1]) {
                continue;
            }
            // If the current element is consecutive to the previous one, increment the count
            else if((nums[i] - nums[i-1]) == 1) {
                count++;
            }
            // If the current element is not consecutive, reset the count to 1
            else {
                count = 1;
            }

            // Update max_count if the current sequence is longer than the previous longest sequence
            max_count = max(max_count, count);
        }

        // Return the length of the longest consecutive sequence
        return max_count;
    }
};




/*
### Complexity Analysis
1. Time Complexity: O(n)
   - Adding numbers to the HashSet takes O(n).
   - Each number is processed at most twice:
     - Once to check if it's the start of a sequence.
     - Once to count the sequence.

2. Space Complexity: O(n)
   - The HashSet stores all numbers in the array.
*/



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end()) ;
        int longest =  0 ;
        for( int num: nums_set ) {
            if ( !nums_set.count(num-1) ){
                int curr_num = num ;
                int curr = 1 ;
                while( nums_set.count(num+1) ){
                    num++ ;
                    curr++ ;
                }
                longest = max(longest, curr) ;
            }
        }
        return longest ;

    }
};