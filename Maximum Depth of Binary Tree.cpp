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
    int maxDepth(TreeNode* root) {
        // Base case: if the root is null, the depth is 0
        if (!root) {
            return 0;
        }
        
        // Recursive case:
        // 1. Recursively calculate the depth of the left subtree
        // 2. Recursively calculate the depth of the right subtree
        // 3. Return the maximum of the two depths, plus 1 for the current node
        return max(1 + maxDepth(root->left), 1 + maxDepth(root->right));
    }
};