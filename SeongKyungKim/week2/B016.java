class Solution {
    public static TreeNode newRoot;
    public static TreeNode prev;
    public static TreeNode curr;
    public TreeNode increasingBST(TreeNode root) {
        newRoot = null;
        prev = null;
        curr = null;
        traversal(root);
        return newRoot;   
    }
    
    public static void traversal(TreeNode node) {
        if(node != null) {
            traversal(node.left);
            if(newRoot==null) {  //root가 null일때, root.val = node.val이런거 못함
                curr = node;
                curr.left = null;
                newRoot = curr; 
            }
          
            else {
                prev = curr;
                curr = node;
                curr.left = null;
                prev.left = null;
                prev.right = curr;
                
                
            }
            traversal(node.right);
        }
    }
}
