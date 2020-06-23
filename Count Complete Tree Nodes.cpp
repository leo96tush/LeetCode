/*
Recursive Solution
*/

class Solution {
public:
	int count ;

	int nodeCount(TreeNode* node) {
		if (!node) return 0 ;

		int p = nodeCount(node->left) ;
		int q = nodeCount(node->right) ;

		return p + q + 1 ;
	}

	int countNodes(TreeNode* root) {
		return nodeCount(root) ;
	}
};


/*
Inorder Traversal
*/

class Solution {
public:
	vector<TreeNode*> inOrder ;

	void inOrderTrav(TreeNode* node) {
		if (!node) return ;

		inOrderTrav(node->left) ;
		inOrder.push_back(node) ;
		inOrderTrav(node->right) ;

	}

	int countNodes(TreeNode* root) {
		inOrderTrav(root) ;
		return inOrder.size() ;
	}
};

/*
Level Order Traversal
*/

class Solution {
public:
	int countNodes(TreeNode* root) {

		if (!root) return 0 ;

		queue<TreeNode*> q ;
		q.push(root) ;

		int count = 0 ;
		vector<vector<int>> level ;

		while (!q.empty()) {

			int size = q.size() ;
			vector<int> dummy ;
			while (size--) {
				TreeNode* curr = q.front() ; q.pop() ;
				count++ ;
				dummy.push_back(curr->val) ;
				if (curr->left) q.push(curr->left) ;
				if (curr->right) q.push(curr->right) ;
			}
			level.push_back(dummy) ;
		}
		return count ;
	}
};