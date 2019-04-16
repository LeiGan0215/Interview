# -*- coding:utf-8 -*-
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None
class Solution:
    # ·µ»ØListNode
    def ReverseList(self, pHead):
        # write code here
        pPre=None
        while pHead!=None:
            pNext=pHead.next
            pHead.next=pPre
            pPre=pHead
            pHead=pNext
        return pPre
        
