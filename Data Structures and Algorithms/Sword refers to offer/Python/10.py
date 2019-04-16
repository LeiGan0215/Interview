# -*- coding:utf-8 -*-
class Solution:
    def rectCover(self, number):
        # write code here
        if number<=2:
            return number;
        one=1
        two=2
        res=0
        for i in range(2,number):
            res=one+two
            one=two
            two=res
            
        return res
