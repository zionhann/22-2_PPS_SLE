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
  public ListNode reverseList(ListNode head) {
      
      if(head==null)
          return null;
      
      ListNode tmp = head;
      List<ListNode> list = new ArrayList<>();
      while( tmp != null) {
          ListNode node = new ListNode(tmp.val);
          list.add(node);
          tmp = tmp.next;
      }
      Collections.reverse(list);
      ListNode ans = list.get(0);
      tmp = ans;
      for(int i=1; i<list.size(); i++) {
          tmp.next = list.get(i);
          tmp = list.get(i); 
      }
      return ans;
  }
}