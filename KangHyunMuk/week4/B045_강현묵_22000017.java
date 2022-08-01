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
  public static boolean isPalindrome(ListNode head) {
       Stack<Integer> stack = new Stack<>();
       ListNode node = head;
       while(node != null) {
           stack.push(node.val);
           node = node.next;
       }
       while(head != null) {
           int i = stack.peek();
           stack.pop();

           if(head.val != i)
               return false;
           head = head.next;
       }
       return true;
   }
}