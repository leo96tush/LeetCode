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

    unordered_map<TreeNode*, unsigned int> id ;

    void id_generator(TreeNode* node) {
        if (!node) return ;
        if (node->left) {
            id[node->left] = (unsigned int)2 * id[node] ;
            id_generator(node->left) ;
        }
        if (node->right) {
            id[node->right] = (unsigned int)2 * id[node] + 1 ;
            id_generator(node->right) ;
        }
    }

    int widthOfBinaryTree(TreeNode* root) {

        if (!root) return 0 ;
        id[root] = 1 ;
        id_generator(root) ;

        queue<TreeNode*> q ;
        q.push(root) ;

        long long max_width = 0 ;

        while (!q.empty()) {
            int size = q.size() ;
            long long left = 9223372036854775807 , right = -9223372036854775807 ;
            while (size--) {
                TreeNode* curr = q.front() ; q.pop() ;
                left = min(left, (long long)id[curr]) ;
                right = max(right, (long long)id[curr]) ;
                if (curr->left) q.push(curr->left) ;
                if (curr->right) q.push(curr->right) ;
            }
            max_width = max(max_width, right - left + 1) ;
        }
        return max_width ;
    }
};