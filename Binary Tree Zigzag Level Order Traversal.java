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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new LinkedList<>() ;

        if (root == null) return ans ;

        Queue<TreeNode> q = new LinkedList<>() ;
        q.add(root) ;

        Integer flag = 0 ;

        while (q.isEmpty() == false) {
            Integer size = q.size() ;
            List<Integer> dummy = new LinkedList<>() ;
            while (size-- > 0) {
                TreeNode curr = q.poll() ;
                dummy.add(curr.val) ;
                if (curr.left != null) q.add(curr.left) ;
                if (curr.right != null) q.add(curr.right) ;
            }
            if (flag == 0) {
                ans.add(dummy) ;
            } else {
                Collections.reverse(dummy);
                ans.add(dummy) ;
            }
            flag = 1 - flag ;
        }

        return ans ;
    }
}