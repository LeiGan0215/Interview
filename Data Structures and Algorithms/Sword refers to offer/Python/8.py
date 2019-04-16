# -*- coding:utf-8 -*-
class Solution:
    def jumpFloor(self, number):
        # write code here
        if number<=2:
            return number
        one=1
        two=2
        res=0
        for i in range(2,number):
            res=one+two
            one=two
            two=res
        return res



# -*- coding:utf-8 -*-
class Solution:
    def jumpFloor(self, number):
        # write code here
        if number<1:
            return 0
        a=[0,1,2]
        for i in range(3,number+1):
            a.append(a[i-1]+a[i-2])
        return a[number]
