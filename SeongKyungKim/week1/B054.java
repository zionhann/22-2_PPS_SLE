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
    public List<Integer> preorder(Node root) {
        list = new ArrayList<>();
        preOrderTraversal(root);
        return list;
        
    }
    
    public static void preOrderTraversal(Node node) {
        if(node != null) {
            list.add(node.val);
            for(Node n : node.children) {
                preOrderTraversal(n);
            }
        }
    }
}
