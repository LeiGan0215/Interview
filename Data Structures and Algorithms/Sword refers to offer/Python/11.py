# -*- coding:utf-8 -*-
class Solution:
    def NumberOf1(self, n):
        # write code here
        count=0
        MAX_INT=(1<<31)-1
        while n:
            if n < - MAX_INT- 1 or n > MAX_INT:
                break
                
            count+=1
            n=n&(n-1)
        return count
