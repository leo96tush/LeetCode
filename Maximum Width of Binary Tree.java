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

    HashMap<TreeNode, Integer> ID = new HashMap<>();

    public void ID_Generator(TreeNode node) {
        if (node == null) return ;
        if (node.left != null) {
            ID.put(node.left, 2 * ID.get(node)) ;
            ID_Generator(node.left);
        }
        if (node.right != null) {
            ID.put(node.right, 2 * ID.get(node) + 1) ;
            ID_Generator(node.right);
        }
        return ;
    }

    public int widthOfBinaryTree(TreeNode root) {

        if (root == null) return 0 ;
        ID.put(root, 1) ;
        ID_Generator(root) ;

        Queue<TreeNode> q = new LinkedList<>() ;
        q.offer(root) ;

        int max_width = 0 ;

        while (!q.isEmpty()) {
            int size = q.size() ;
            int right = -2147483648 , left =  2147483647 ;
            while (size-- > 0) {
                TreeNode curr = q.poll() ;
                left = Math.min(left, ID.get(curr)) ;
                right = Math.max(right, ID.get(curr)) ;
                if (curr.left != null) q.offer(curr.left) ;
                if (curr.right != null) q.offer(curr.right) ;
            }
            max_width = Math.max(max_width, right - left + 1) ;
        }
        return max_width ;
    }
}