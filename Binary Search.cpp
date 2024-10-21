class Solution {
public:
    // Function to perform binary search on a sorted array
    int search(vector<int>& nums, int target) {
        int low = 0; // Initialize the lower bound of the search range
        int high = nums.size() - 1; // Initialize the upper bound of the search range

        // Continue searching while the search range is valid
        while (low <= high) {
            int mid = (low + high) / 2; // Calculate the middle index of the current search range

            // Check if the middle element is the target
            if (nums[mid] == target) {
                return mid; // Target found, return its index
            }
            // If the middle element is less than the target, narrow the search range to the right half
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            // If the middle element is greater than the target, narrow the search range to the left half
            else {
                high = mid - 1;
            }
        }

        return -1; // Target not found, return -1
    }
};