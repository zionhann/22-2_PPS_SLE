import java.util.Set;
import java.util.HashSet;

class Solution {
    public static Set<Integer> set;
    public int rangeSumBST(TreeNode root, int low, int high) {
        int sum=0;
        set = new HashSet<>();
        inorderTraversal(root);
        for(Integer i: set) {
            if(i >= low && i <= high) sum+=i;
        }
        return sum;
        
    }
    
    public static void inorderTraversal(TreeNode node) {
        if(node != null) {
            inorderTraversal(node.left);
            set.add(node.val);
            inorderTraversal(node.right);
            
        }
        
    }
}
