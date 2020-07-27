/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode build(int[] inorder, int s1, int e1, int[] postorder, int s2, int e2) {
        if (s1 > e1 || s2 > e2) return null ;

        int left_size , right_size , root_node , root_index = 0 ;
        root_node = postorder[e2] ;

        for ( int i = s1 ; i <= e1 ; i++ ) {
            if ( inorder[i] == root_node ) {
                root_index = i ; break ;
            }
        }

        int size = root_index - s1 ;
        TreeNode root = new TreeNode(root_node) ;
        root.left = build(inorder, s1, root_index - 1, postorder, s2, s2 + size - 1) ;
        root.right = build(inorder, root_index + 1, e1, postorder, s2 + size, e2 - 1) ;
        return root ;
    }

    public TreeNode buildTree(int[] inorder, int[] postorder) {
        int size1 = inorder.length , size2 = postorder.length ;
        if (size1 == 0 || size2 == 0) return null ;
        return build(inorder, 0, size1 - 1, postorder, 0, size2 - 1) ;
    }
}