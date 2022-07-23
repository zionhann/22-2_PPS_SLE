class Solution {
    public static List<Integer> list;
    public int findTilt(TreeNode root) {
        int sum=0;
        list = new ArrayList<>();
        calTilt(root);
        
        for(Integer i : list) {
            sum += i;
        }
        return sum;
    }
    
    public static int calTilt(TreeNode node) { 
        if(node == null) return 0;
        else {
            int left = calTilt(node.left);
            int right = calTilt(node.right);
            list.add(Math.abs(left-right));
            return left+ right+node.val;
        }
    }
    
}
