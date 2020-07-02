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

/*
Level Order Traversal
Time Complexity : O(n)
Space Complexity : O(n)
*/


class Solution {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {

        List<List<Integer>> result = new LinkedList<>() ;

        if (root == null) return result ;

        Deque<TreeNode> q = new ArrayDeque<>() ;
        q.offer(root) ;

        while (!q.isEmpty()) {
            int size = q.size() ;
            List<Integer> dummy = new LinkedList<Integer>() ;
            while (size-- > 0) {
                TreeNode curr = q.poll() ;
                dummy.add(curr.val) ;
                if (curr.left != null) q.offer(curr.left) ;
                if (curr.right != null) q.offer(curr.right) ;
            }
            result.add(0, dummy) ;
        }
        return result ;
    }
}