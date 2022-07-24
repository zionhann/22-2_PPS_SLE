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
    public static List<String> list;
    public List<String> binaryTreePaths(TreeNode root) {
        list = new ArrayList<>();
        traversal(root, Integer.toString(root.val));
        return list;
    }
    
    public static void traversal(TreeNode node, String str) {
        if(node!=null) {
            if(node.left!=null){
                traversal(node.left, str+"->"+Integer.toString(node.left.val));
            }
            if(node.right!=null) {
                traversal(node.right, str+"->"+Integer.toString(node.right.val));
            }
            if(node.left==null && node.right==null) {
                list.add(str);
            }
        }
            
    }
}
