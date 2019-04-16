# -*- coding:utf-8 -*-
class Solution:
    def reOrderArray(self, array):
        # write code here
        return [x for x in array if x%2==1]+[x for x in array if x%2==0]
        
        
        
# -*- coding:utf-8 -*-
class Solution:
    def reOrderArray(self, array):
        # write code here
        res1=[]
        res2=[]
        for i in array:
            if i%2==1:
                res1.append(i)
            else:
                res2.append(i)
                
        return res1+res2
