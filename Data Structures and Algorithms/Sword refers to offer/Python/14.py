# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def FindKthToTail(self, head, k):
        # write code here
        num=k
        left=head
        right=head
        while num>0 and right!=None:
            right=right.next
            num-=1
        if num>0:
            return None
        while right!=None:
            left=left.next
            right=right.next
        return left
