class Solution {
public:
    bool closeStrings(string word1, string word2) {
        // Create frequency maps for characters in both words
        unordered_map<char, int> word1_count_map;
        unordered_map<char, int> word2_count_map;

        // Vectors to store frequency counts
        vector<int> word1_count;
        vector<int> word2_count;

        // Count frequency of characters in word1
        for(char c: word1){
            word1_count_map[c]++ ;
        }

        // Count frequency of characters in word2
        for(char c: word2){
            word2_count_map[c]++ ;
        }

        // Check if all characters in word1 exist in word2
        for(char c: word1){
            if (word2_count_map[c] == 0){
                return false ; // Character from word1 not found in word2
            }
        }

        // Check if all characters in word2 exist in word1
        for(char c: word2){
            if(word1_count_map[c] == 0 ){
                return false ; // Character from word2 not found in word1
            }
        }

        // Store frequency counts of word1 in a vector
        for(auto count_map: word1_count_map){
            word1_count.push_back(count_map.second) ;
        }

        // Store frequency counts of word2 in a vector
        for(auto count_map: word2_count_map){
            word2_count.push_back(count_map.second) ;
        }

        // Sort frequency counts for comparison
        sort(word1_count.begin(), word1_count.end()) ;
        sort(word2_count.begin(), word2_count.end()) ;

        // Compare frequency maps and vectors
        return (word1_count_map == word2_count_map) || (word1_count == word2_count) ;

    }
};