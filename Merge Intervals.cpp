/*
1. Time Complexity:
   - Sorting the intervals: O(n \log n), where n is the number of intervals.
   - Merging intervals: O(n), as each interval is processed once.
   - Overall: O(n \log n).

2. Space Complexity:
   - Sorting uses O(\log n) space for the in-place sort.
   - The `output` vector uses O(n) space for storing the result.
   - Overall: O(n).
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end()) ;

        vector<vector<int>> output ;

        for( auto interval: intervals ) {
            if( output.empty() || output.back()[1] < interval[0] ) output.push_back(interval) ;
            else output.back()[1] = max(output.back()[1], interval[1]) ;
        }

        return output ;

    }
};