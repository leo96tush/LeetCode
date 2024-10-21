class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Initialize the current subarray sum and the maximum subarray sum
        int curr_output = nums[0];
        int max_output = nums[0];

        // Iterate through the array starting from the second element
        for(int i = 1; i < nums.size(); i++) {
            // Update the current subarray sum by including the current element
            // or starting a new subarray from the current element
            curr_output = max(nums[i], curr_output + nums[i]);
            
            // Update the maximum subarray sum if the current subarray sum is greater
            max_output = max(max_output, curr_output);
        }

        // Return the maximum subarray sum found
        return max_output;
    }
};