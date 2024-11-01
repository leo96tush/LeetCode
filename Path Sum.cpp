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
	// Function to determine if the tree has a root-to-leaf path that sums to targetSum
	bool hasPathSum(TreeNode* root, int targetSum) {

		// If the root is null, there can't be a path, so return false
		if (!root) return false;

		// If we reach a leaf node (both left and right children are null)
		// and the targetSum equals the value of the current node, we found a path
		if (!(root->left) && !(root->right) && targetSum == root->val) return true;

		// Recursively check the left and right subtrees, subtracting the current node's value from targetSum
		return hasPathSum(root->left, targetSum - (root->val)) || hasPathSum(root->right, targetSum - (root->val));
	}
};
