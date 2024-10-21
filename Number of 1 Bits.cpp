class Solution {
public:
    // Function to count the number of '1' bits in an integer
    int hammingWeight(int n) {
        int output = 0; // Initialize the count of '1' bits to 0

        // Loop until all bits are processed
        while (n > 0) {
            // Check if the least significant bit is '1'
            if (n % 2 != 0) {
                output += 1; // Increment the count of '1' bits
            }
            n = n / 2; // Shift the bits to the right by dividing by 2
        }

        return output; // Return the total count of '1' bits
    }
};