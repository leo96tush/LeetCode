/**
 * Definition for a binary tree node.
 * This structure defines a TreeNode, which has an integer value and two pointers
 * to the left and right child nodes, respectively.

struct TreeNode {
    int val;  // Value of the current node
    TreeNode *left;  // Pointer to the left child
    TreeNode *right;  // Pointer to the right child

    // Constructor to initialize the node with a value and set children to NULL
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
*/

class Solution {
public:

    // Helper function to find the path from the root node to the target node
    bool findPath(TreeNode* node, vector<TreeNode*> &path, TreeNode *nodecheck) {
        // If the current node is NULL, return false
        if (!node)
            return false;

        // Add the current node to the path
        path.push_back(node);

        // If the current node is the target node, or if the target node is found
        // in either the left or right subtree, return true
        if (node == nodecheck ||
            findPath(node->left, path, nodecheck) ||
            findPath(node->right, path, nodecheck)) {
            return true;
        }

        // If the target node is not found in either subtree, remove the current
        // node from the path and return false
        path.pop_back();
        return false;
    }

    // Function to find the lowest common ancestor (LCA) of two nodes, p and q
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Vectors to store the paths from the root to nodes p and q
        vector<TreeNode*> path1, path2;

        // Find the paths from the root to p and q
        findPath(root, path1, p);
        findPath(root, path2, q);

        // Initialize an index to iterate through both paths
        int i = 0;

        // Compare the paths to find the last common node
        while (i < min(path1.size(), path2.size()) && path1[i] == path2[i]) {
            i++;
        }

        // Return the last common node in the path
        return path1[i - 1];
    }
};
