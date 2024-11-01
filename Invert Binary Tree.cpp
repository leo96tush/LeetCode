/**
* Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	// Helper function to invert the left and right subtrees of the given node
	void helper(TreeNode* node) {
		// Base case: if the node is null, return
		if (!node) return;

		// Swap the left and right children of the current node
		TreeNode* temp1 = node->left;
		TreeNode* temp2 = node->right;
		node->left = temp2;
		node->right = temp1;

		// Recursively invert the left and right subtrees
		helper(node->left);
		helper(node->right);
	}

	// Function to invert a binary tree
	TreeNode* invertTree(TreeNode* root) {
		// If the root is null, return null
		if (!root) return root;

		// Use the helper function to invert the tree starting from the root
		helper(root);

		// Return the root of the inverted tree
		return root;
	}
};
