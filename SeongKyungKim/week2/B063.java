class Solution {
    public static Set<Integer> set;
    public boolean isUnivalTree(TreeNode root) {
        set = new HashSet<>();
        inorderTraversal(root);
        int count=0;
        for(Integer i : set) {
            if(i != null) count++;
        } 
        if(count == 1) return true;
        else return false;
        
        
    }
    
    public static void inorderTraversal(TreeNode node) {
        if(node != null) {
            inorderTraversal(node.left);
            set.add(node.val);
            inorderTraversal(node.right);
        }
    }
}
