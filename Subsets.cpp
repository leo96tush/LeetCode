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

    }
};