# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        prev, cur = head.next, head.next
        cur_sum = 0
        while cur:
            temp = cur.val
            if temp != 0:
                cur_sum += temp
            else:
                prev.val = cur_sum
                prev.next = cur.next
                prev = prev.next
                cur_sum = 0
            cur = cur.next
        return head.next


