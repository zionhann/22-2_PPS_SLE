class Solution {
    public static Set<Integer> set;
    public boolean hasPathSum(TreeNode root, int targetSum) {
        set= new HashSet<>();
        
        traversal(root, 0);
        
        if(set.contains(targetSum)) return true;
        else return false;
        
    }
    
    public static void traversal(TreeNode node, int sum) {
        if(node!=null) {
             if(node.left!=null) {
                traversal(node.left, sum+node.val);
            } 
            
            if(node.right!=null) {
                traversal(node.right, sum+node.val);
            } 
            if(node.left==null && node.right==null) set.add(sum+node.val);
        }
            
            
    }
}
