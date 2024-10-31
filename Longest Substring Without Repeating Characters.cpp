class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		// Initialize starting index of the current substring (i),
		// the length of the longest substring found so far (output),
		// and the size of the input string (s_size).
		int i = 0;
		int output = 0;
		int s_size = s.size();

		// Create an unordered map to store the last seen position of each character.
		unordered_map<char, int> mp;

		// Iterate over each character in the string with j as the ending index of the current substring.
		for(int j = 0; j < s_size; j++) {

			// If the character at index j has been seen before and its last seen position is
			// within the current window, update i to exclude the previous occurrence of s[j].
			if(mp[s[j]] > 0) {
				i = max(mp[s[j]], i);
			}

			// Calculate the current length of the substring and update output if it's the longest so far.
			output = max(output, j - i + 1);

			// Update the last seen position of the character s[j] to j + 1.
			mp[s[j]] = j + 1;
		}

		// Return the length of the longest substring without repeating characters.
		return output;
	}
};
