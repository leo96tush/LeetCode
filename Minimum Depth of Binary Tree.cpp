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
    // Function to calculate the minimum depth of a binary tree
    int minDepth(TreeNode* root) {
        // If the root is null, the depth is 0
        if (!root) {
            return 0;
        }

        // If the current node is a leaf node (no left or right child), the depth is 1
        if (root && !(root->left) && !(root->right)) {
            return 1;
        }

        // If the current node has only a left child and no right child
        if (root && (root->left) && !(root->right)) {
            // Return 1 + depth of the left subtree, using INT_MAX to ensure we choose the minimum correctly
            return 1 + min(minDepth(root->left), INT_MAX);
        }

        // If the current node has only a right child and no left child
        if (root && !(root->left) && (root->right)) {
            // Return 1 + depth of the right subtree, using INT_MAX to ensure we choose the minimum correctly
            return 1 + min(minDepth(root->right), INT_MAX);
        }

        // If the current node has both left and right children, return 1 + the minimum of the depths of the left and right subtrees
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
