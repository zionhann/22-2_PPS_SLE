class Solution(object):
    def reverseList(self, head):
        prev = None
        curr = head
        
        while curr:
            nextt = curr.next
            curr.next = prev
            prev = curr
            curr = nextt
            
        return prev
