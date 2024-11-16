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
	vector<int> inorder ;
	void inorder_traversal(TreeNode* node) {

		if(!node){
			return ;
		}

		inorder_traversal(node->left) ;
		inorder.push_back(node->val) ;
		inorder_traversal(node->right) ;

	}
	bool isValidBST(TreeNode* root) {

		inorder_traversal(root) ;

		for(int i=1 ; i<inorder.size() ; i++){
			if (inorder[i] <= inorder[i-1]){
				return false ;
			}
		}

		return true ;

	}
};