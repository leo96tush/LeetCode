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
    // Function to calculate the depth of a node in the binary tree
    int depth_of_node(TreeNode* root) {
        // If the node is null, return depth as 0
        if(!root) {
            return 0;
        }

        // If the node has a left child but no right child, calculate depth of left subtree
        if((root->left) && !(root->right)) {
            return 1 + depth_of_node(root->left);
        }

        // If the node has a right child but no left child, calculate depth of right subtree
        if(!(root->left) && (root->right)) {
            return 1 + depth_of_node(root->right);
        }

        // If the node has both children, calculate the maximum depth between left and right subtrees
        return max(1 + depth_of_node(root->left), 1 + depth_of_node(root->right));
    }

    // Function to check if the binary tree is balanced
    bool isBalanced(TreeNode* root) {
        // If the tree is empty, it is balanced
        if(!root) {
            return true;
        }

        // Check if the difference in depth between left and right subtrees is at most 1
        if(abs(depth_of_node(root->left) - depth_of_node(root->right)) <= 1) {
            // Recursively check if left and right subtrees are balanced
            if(isBalanced(root->left) && isBalanced(root->right)) {
                return true;
            }
        }

        // If any of the above conditions fail, the tree is not balanced
        return false;
    }
};