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

	// Helper function to check if two trees are mirrors of each other
	bool isMirror(TreeNode* root1, TreeNode* root2) {

		// If both trees are empty, they are mirrors
		if (!root1 && !root2) return true;

		// If one tree is empty and the other is not, they are not mirrors
		if (root1 && !root2) return false;
		if (!root1 && root2) return false;

		// If the values of the current nodes are different, they are not mirrors
		if (root1->val != root2->val) return false;

		// Recursively check if the left subtree of root1 is a mirror of the right subtree of root2
		// and the right subtree of root1 is a mirror of the left subtree of root2
		return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
	}

	// Function to check if a tree is symmetric
	bool isSymmetric(TreeNode* root) {
		// An empty tree is symmetric
		if (!root) return true;

		// Check if the left and right subtrees are mirrors of each other
		return isMirror(root->left, root->right);
	}
};
