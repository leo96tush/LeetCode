class Solution {
public:
    string removeStars(string s) {
        // Stack to store characters
        stack<char> temp_stack;

        // Iterate through each character in the input string
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '*') {
                // If the character is not a star, push it onto the stack
                temp_stack.push(s[i]);
            } else {
                // If it's a star and the stack is not empty, remove the top element
                if(!temp_stack.empty()) {
                    temp_stack.pop();
                }
            }
        }

        // String to store the final result
        string output = "";

        // Transfer characters from stack to output string
        while(!temp_stack.empty()) {
            output += temp_stack.top();
            temp_stack.pop();
        }

        // Reverse the output string to get the correct order
        reverse(output.begin(), output.end());

        return output;
    }
};