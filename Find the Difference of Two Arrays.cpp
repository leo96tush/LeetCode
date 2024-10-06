class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        // Create sets to store unique elements from both input vectors
        unordered_set<int> init_set1;
        unordered_set<int> init_set2;

        // Create sets to store the unique elements that are in one vector but not in the other
        unordered_set<int> output1;
        unordered_set<int> output2;

        // Populate init_set1 with unique elements from nums1
        for(int num: nums1){
            init_set1.insert(num);
        }        

        // Populate init_set2 with unique elements from nums2
        for(int num: nums2){
            init_set2.insert(num);
        }

        // Find elements in init_set1 that are not in init_set2
        for(auto integer: init_set1){
            cout << integer << endl; // Debug output, can be removed
            if(init_set2.find(integer) == init_set2.end()){
                output1.insert(integer);
            }
        }

        // Find elements in init_set2 that are not in init_set1
        for(auto integer: init_set2){
            cout << integer << endl; // Debug output, can be removed
            if(init_set1.find(integer) == init_set1.end()){
                output2.insert(integer);
            }
        }

        // Convert output sets to vectors
        vector<int> vector_out1;
        vector<int> vector_out2;

        // Create the final output vector of vectors
        vector<vector<int>> out;

        // Populate vector_out1 with elements from output1
        for(auto integer: output1){
            vector_out1.push_back(integer);
        }

        // Add vector_out1 to the final output
        out.push_back(vector_out1);

        // Populate vector_out2 with elements from output2
        for(auto integer: output2){
            vector_out2.push_back(integer);
        }

        // Add vector_out2 to the final output
        out.push_back(vector_out2);

        // Return the final result
        return out;
    }
};