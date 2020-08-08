class Solution {
public:
	int countPath(TreeNode *root, int sum) {
		return root ? (sum == root->val) + countPath(root->left, sum - root->val) + countPath(root->right, sum - root->val) : 0;
	}

	int pathSum(TreeNode* root, int sum) {
		return root ? countPath(root, sum) + pathSum(root->left, sum) + pathSum(root->right, sum) : 0;
	}
};