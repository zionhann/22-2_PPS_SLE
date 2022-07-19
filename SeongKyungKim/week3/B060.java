class Solution {
    public static int xlist[];
    public static int ylist[];
    public boolean isCousins(TreeNode root, int x, int y) {
        boolean isCousin;
        xlist = new int[2];
        ylist = new int[2];
        traversal(root, 0, root.val, x, y);
        if(xlist[0]==ylist[0] && xlist[1]!=ylist[1]) {
            isCousin = true;
        }
        else isCousin = false;
        return isCousin;
        
    }
    
    public static void traversal(TreeNode node, int depth, int parent, int x, int y) {
        if(node!=null) {
            if(node.val == x) {
                xlist[0] = depth;
                xlist[1] = parent;
                traversal(node.left, depth+1, node.val, x, y);
                traversal(node.right, depth+1, node.val, x, y);
                
            }
            else if(node.val == y) {
                ylist[0] = depth;
                ylist[1] = parent;
                traversal(node.left, depth+1, node.val, x, y);
                traversal(node.right, depth+1, node.val, x, y);
                
            }
            else {
                traversal(node.left, depth+1, node.val, x, y);
                traversal(node.right, depth+1, node.val, x, y);
            }
        }
    }
}
