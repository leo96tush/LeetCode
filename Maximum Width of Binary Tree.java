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

    //HashMap for the ID of each TreeNode
    //If parent_ID = x , left_child_ID = 2*x , right_child_ID = 2*x+1
    HashMap<TreeNode, Integer> ID = new HashMap<>();


    //Function to create ID for each TreeNode
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


    //Calculating the width at each level by taking
    //leftmost TreeNode as minimum and rightmost TreeNode as maximum
    //Difference between the minimum and maximum
    //will denote the width as each level
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
        //Returning the maximum width
        return max_width ;
    }
}