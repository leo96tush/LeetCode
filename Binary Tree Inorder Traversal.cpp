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
    vector<int> inorderTraversal(TreeNode* root) {
    // Initialize an empty vector to store the inorder traversal result
        vector<int> output;

        // If the root is null, return an empty vector
        if (!root) {
            return {};
        }

        // If there is a left child, recursively perform inorder traversal on the left subtree
        if (root->left) {
            vector<int> left_output = inorderTraversal(root->left);
            // Append the result of the left subtree traversal to the output vector
            for (int i = 0; i < left_output.size(); i++) {
                output.push_back(left_output[i]);
            }
        }

        // Add the value of the current node to the output vector
        output.push_back(root->val);

        // If there is a right child, recursively perform inorder traversal on the right subtree
        if (root->right) {
            vector<int> right_output = inorderTraversal(root->right);
            // Append the result of the right subtree traversal to the output vector
            for (int i = 0; i < right_output.size(); i++) {
                output.push_back(right_output[i]);
            }
        }

        // Return the final inorder traversal result
        return output;
    }
};