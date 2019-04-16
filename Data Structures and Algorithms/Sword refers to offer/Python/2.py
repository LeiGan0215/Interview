# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        # write code here
        return '%20'.join(s.split(' '))
        
"""
Python split() 通过指定分隔符对字符串进行切片，如果参数 num 有指定值，则分隔 num+1 个子字符串
语法：str.split(str="", num=string.count(str)).
		str -- 分隔符，默认为所有的空字符，包括空格、换行(\n)、制表符(\t)等。
		num -- 分割次数。默认为 -1, 即分隔所有。
返回分割后的字符串列表。
用法实例：
		str = "Line1-abcdef \nLine2-abc \nLine4-abcd";
		print(str.split( ))       # 以空格为分隔符，包含 \n
		print str.split((' ', 1 ))# 以空格为分隔符，分隔成两个
		结果：['Line1-abcdef', 'Line2-abc', 'Line4-abcd']
		
Python  join() 连接字符串数组。将字符串、元组、列表中的元素以指定的字符(分隔符)连接生成一个新的字符串
语法：  'sep'.join(seq)
		sep：分隔符。可以为空
		seq：要连接的元素序列、字符串、元组、字典
		上面的语法即：以sep作为分隔符，将seq所有的元素合并成一个新的字符串
返回值：返回一个以分隔符sep连接各个元素后生成的字符串
"""

# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        # write code here
        return s.replace(' ','%20')
"""
Python replace() 方法把字符串中的 old（旧字符串） 替换成 new(新字符串)，如果指定第三个参数max，则替换不超过 max 次
语法：str.replace(old, new[, max])
		old -- 将被替换的子字符串。
		new -- 新字符串，用于替换old子字符串。
		max -- 可选字符串, 替换不超过 max 次
"""


# -*- coding:utf-8 -*-
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        # write code here
        s=list(s)
        for i,val in enumerate(s):
            if(val==' '):
                s[i]='%20'
        return ''.join(s)
                        
                
            
            
            
        
        
