class Solution {
    public static int sum;
    public int sumOfLeftLeaves(TreeNode root) {
        sum = 0;
        inorderTraversal(root, false);
        return sum;
    }
    
    public static void inorderTraversal(TreeNode node, boolean left) {
        if(node!=null) {
            inorderTraversal(node.left, true);
            if(node.left == null && node.right == null && left) sum += node.val;
            inorderTraversal(node.right, false);
            
        }
    }
}
