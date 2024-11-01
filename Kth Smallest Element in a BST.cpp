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
	// Vector to store the in-order traversal of the tree
	vector<int> inorder;

	// Helper function to perform an in-order traversal of the tree
	void constructInorder(TreeNode* node) {
		// Base case: if the node is null, return
		if (!node) return;

		// Recursively traverse the left subtree
		constructInorder(node->left);

		// Visit the current node and store its value in the inorder vector
		inorder.push_back(node->val);

		// Recursively traverse the right subtree
		constructInorder(node->right);
	}

	// Function to find the k-th smallest element in a Binary Search Tree (BST)
	int kthSmallest(TreeNode* root, int k) {
		// Construct the in-order traversal of the BST
		constructInorder(root);

		// Return the k-th smallest element (0-indexed, hence k-1)
		return inorder[k - 1];
	}
};
