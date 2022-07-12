class Solution {
    public static List<Integer> list[];
    public boolean isSameTree(TreeNode p, TreeNode q) {
        list = new ArrayList[2];
        list[0] = new ArrayList<>();
        list[1] = new ArrayList<>();
        boolean result;
        
        preorderTraversal(p, 0);
        preorderTraversal(q, 1);
       
        result = list[0].equals(list[1]);
        return result;
        
    }
  
    public static void preorderTraversal (TreeNode node, int i) {
        if(node==null) list[i].add(null); 
        if(node != null) {
            list[i].add(node.val);
            preorderTraversal(node.left, i);
            preorderTraversal(node.right, i);
        }
    }
    
}
