class Solution {
    public static int maxDepth;
    public int maxDepth(TreeNode root) {
        maxDepth = 0;
        traversal(root, 1);
        return maxDepth;
    }
    
    public static void traversal(TreeNode node, int depth) {
        if(node != null) {
            traversal(node.left, depth+1);
            if(depth > maxDepth) maxDepth = depth;
            traversal(node.right, depth+1);
        }
    }
}
