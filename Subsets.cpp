class Solution {
public:
    /**
     * Generates all possible subsets of a given set of integers.
     *
     * @param nums A vector of integers representing the input set.
     * @return A vector of vectors, where each inner vector is a subset of the input set.
     *
     * The function initializes the output with an empty subset.
     * For each number in the input set, it creates new subsets by adding the number
     * to each existing subset in the output.
     * These new subsets are then added to the output.
     * Finally, the function returns the complete list of subsets.
     */
    vector<vector<int>> subsets(vector<int>& nums) {
        // Initialize the output with an empty subset
        vector<vector<int>> output;

        // Add the empty subset to the output
        output.push_back({});

        // Iterate over each number in the input set
        for(int num: nums){
            // Create a temporary vector to store new subsets
            vector<vector<int>> newsubset;

            // Iterate over each existing subset in the output
            for(vector<int> curr: output){
                // Create a new subset by adding the current number to the existing subset
                vector<int> temp = curr;
                temp.push_back(num);
                // Add the new subset to the temporary vector
                newsubset.push_back(temp);
            }

            // Add all new subsets to the output
            for(vector<int> curr: newsubset){
                output.push_back(curr);
            }
        }

        // Return the complete list of subsets
        return output;
    }
};

/**
 * @class Solution
 * @brief Provides a solution to generate all possible subsets of a given set of integers.
 */

/**
 * @brief Converts a given number to its binary representation as a string.
 * 
 * This function converts a given integer to its binary representation and 
 * ensures the binary string has a fixed length by padding with zeros.
 * 
 * @param number The integer to be converted to binary.
 * @param number_size The fixed length of the binary string.
 * @return A string representing the binary form of the given number.
 */
string bool_string(int number, int number_size) {
    // Initialize an empty string to store the binary representation
    string out = "";

    // Convert the number to binary
    while(number > 0) {
        // Append the remainder of number divided by 2 (0 or 1) to the string
        out += to_string(number % 2);
        // Divide the number by 2
        number = number / 2;
    }

    // Calculate the number of zeros needed to pad the binary string to the fixed length
    number_size = number_size - out.size();

    // Pad the binary string with zeros
    while(number_size > 0) {
        out += "0";
        number_size--;
    }

    // Return the binary string
    return out;
}

/**
 * @brief Generates all possible subsets of a given set of integers.
 * 
 * This function generates all subsets of the input vector `nums` using 
 * binary representation. Each subset corresponds to a binary number where 
 * each bit represents whether an element is included in the subset.
 * 
 * @param nums A vector of integers for which subsets are to be generated.
 * @return A vector of vectors, where each inner vector is a subset of `nums`.
 */
vector<vector<int>> subsets(vector<int>& nums) {
    // Initialize the output vector to store all subsets
    vector<vector<int>> output;

    // Calculate the total number of subsets (2^n)
    int number = pow(2, nums.size());
    // Get the size of the input vector
    int nums_size = nums.size();

    // Iterate over each possible subset (from 0 to 2^n - 1)
    for(int i = 0; i < number; i++) {
        // Initialize a temporary vector to store the current subset
        vector<int> temp;

        // Get the binary representation of the current number
        string curr_string = bool_string(i, nums_size);

        // Iterate over each bit in the binary string
        for(int j = 0; j < curr_string.size(); j++) {
            // If the bit is '1', include the corresponding element in the subset
            if(curr_string[j] == '1') {
                temp.push_back(nums[j]);
            }
        }

        // Add the current subset to the output vector
        output.push_back(temp);
    }

    // Return the complete list of subsets
    return output;
}