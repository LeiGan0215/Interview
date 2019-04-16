# -*- coding:utf-8 -*-
class Solution:
    def Fibonacci(self, n):
        # write code here
        if n<=1:
            return n
        one=0
        two=1
        for i in range(1,n):
            res=one+two
            one=two
            two=res
        return res
