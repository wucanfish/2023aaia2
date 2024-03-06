//LC141
class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        fast, slow=head,head

        while fast!=None and fast.next!=None:
            fast=fast.next.next
            slow=slow.next
            if fast==slow: return 1
        return 0
