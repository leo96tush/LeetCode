class Solution {
public:
	// Function to perform level order traversal on a binary tree
	vector<vector<int>> levelOrder(TreeNode* root) {

		// Output vector to store each level's values
		vector<vector<int>> output;

		// If the root is null, return an empty output
		if (!root) {
			return output;
		}

		// Queue to help with level order traversal
		queue<TreeNode*> q;
		// Start with the root node
		q.push(root);

		// Loop until the queue is empty
		while (!q.empty()) {
			// Get the number of nodes at the current level
			int queue_size = q.size();

			// Temporary vector to store values of the current level
			vector<int> temp;

			// Process all nodes at the current level
			while (queue_size--) {
				// Get the front node in the queue
				TreeNode* curr = q.front();
				// Add the value of the current node to the temp vector
				temp.push_back(q.front()->val);
				// Remove the processed node from the queue
				q.pop();

				// If the current node has a left child, add it to the queue
				if (curr->left) {
					q.push(curr->left);
				}

				// If the current node has a right child, add it to the queue
				if (curr->right) {
					q.push(curr->right);
				}
			}

			// Add the values of the current level to the output
			output.push_back(temp);
			// Clear the temp vector for the next level
			temp.clear();
		}

		// Return the final level order traversal output
		return output;
	}
};
