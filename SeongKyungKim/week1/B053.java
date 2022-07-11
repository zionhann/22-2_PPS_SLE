/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;
    public Node() {}
    public Node(int _val) {
        val = _val;
    }
    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
    public static List<Integer> list;
    public List<Integer> postorder(Node root) {
        list = new ArrayList<>();
        postOrderTraversal(root);
        return list;
        
    }
    
    public static void postOrderTraversal(Node node) {
        if(node!=null) {
            for(Node n : node.children) {
                postOrderTraversal(n);
            }
            list.add(node.val);
        }
    }
    
    
}
