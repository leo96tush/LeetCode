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
    TreeNode* build(vector<int>& inorder, int s1, int e1, vector<int>& postorder, int s2, int e2) {
        if (s1 > e1 || s2 > e2) return NULL ;
        int root_index , left_size , right_size ;

        int root_node = postorder[e2] ;

        for ( int i = s1 ; i <= e1 ; i++ ) {
            if ( inorder[i] == root_node ) {
                root_index = i  ; break ;
            }
        }

        left_size = root_index - s1 ;
        right_size = e1 - root_index ;

        TreeNode* root = new TreeNode(root_node) ;
        root->left = build(inorder, s1, root_index - 1, postorder, s2, s2 + left_size - 1) ;
        root->right = build(inorder, root_index + 1, e1, postorder, s2 + left_size, e2 - 1) ;
        return root ;

    }


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int size1 = inorder.size() ;
        int size2 = postorder.size() ;
        if ( size1 == 0 || size2 == 0 ) return NULL ;
        return build(inorder, 0, size1 - 1, postorder, 0, size2 - 1) ;
    }
};