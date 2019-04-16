# -*- coding:utf-8 -*-
class Solution:
    # array 二维列表
    def Find(self, target, array):
        # write code here
        m,n=len(array),len(array[0])
        i=0
        j=n-1
        while (i<m and j>=0):
            if target==array[i][j]:
                return True
            elif target<array[i][j]:
                j-=1
            elif target>array[i][j]:
                i+=1
        return False
    
"""
# -*- coding:utf-8 -*-
class Solution:
    # array 二维列表
    def Find(self, target, array):
        # write code here
        m=len(array)
        n=len(array[0])
        for i in range(m):
            for j in range(n):
                if target==array[i][j]:
                    return True
        return False
"""
