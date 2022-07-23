/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode middle = new ListNode();
        List<ListNode> list = new ArrayList<>();
        ListNode node = head;
        while(node != null) {
            list.add(node);
            node = node.next;
        }
        
        middle = list.get(list.size()/2);
        return middle;
    }
}
