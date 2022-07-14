class Solution {
    public static List<Integer> list[];
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        list = new ArrayList[2];
        list[0] = new ArrayList<>();
        list[1] = new ArrayList<>();
        
        inorderTraversal(root1, 0);
        inorderTraversal(root2, 1);
        
        if(list[0].equals(list[1])) return true;
        else return false;
        
    }
    
    public static void inorderTraversal(TreeNode node, int i) {
        if(node != null) {
            if(node.left == null && node.right == null) {
                list[i].add(node.val);
            }
            else {
                inorderTraversal(node.left, i);
                inorderTraversal(node.right, i);
            }
            
        }
    }
    
    
}
