/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val; // Value of the node
 *     TreeNode *left; // Pointer to the left child
 *     TreeNode *right; // Pointer to the right child
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {} // Default constructor
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {} // Constructor with value
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {} // Constructor with value and children
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, int> path_max; // Map to store the maximum value along the path to each node

    // Function to calculate the maximum value along the path from the root to each node
    void calPathMax(TreeNode* root) {
        if (!root) { // Base case: if the node is null, return
            return;
        }
        // Update the maximum value for the left child if it exists
        if (root->left) {
            path_max[root->left] = max(path_max[root], root->left->val);
        }

        // Update the maximum value for the right child if it exists
        if (root->right) {
            path_max[root->right] = max(path_max[root], root->right->val);
        }

        // Recursively call for left and right children
        calPathMax(root->left);
        calPathMax(root->right);
    }

    // Function to count the good nodes in the binary tree
    int goodNodes(TreeNode* root) {
        if (!root) { // If the tree is empty, return 0
            return 0;
        }
        else if (root && !(root->left) && !(root->right)) { // If it's a leaf node
            path_max[root] = root->val; // Initialize the path max for the leaf
            return 1; // Leaf nodes are considered good
        }
        path_max[root] = root->val; // Initialize the path max for the root
        calPathMax(root); // Calculate path max values for all nodes

        int output = 0; // Counter for good nodes

        // Iterate through the path_max map to count good nodes
        for (auto iterator : path_max) {
            if (iterator.first->val >= iterator.second) { // Check if the node value is greater than or equal to the path max
                output++; // Increment the count of good nodes
            }
        }

        return output; // Return the total count of good nodes
    }
};