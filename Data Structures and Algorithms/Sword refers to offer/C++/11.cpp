//1
class Solution {
public:
     int  NumberOf1(int n) {
	 bitset<32> bit(n);
	 return bit.count();    	
     }
};

//2
class Solution {
public:
     int  NumberOf1(int n) {
        int count=0;
        while(n)
        {
        	count++;
        	n=n&(n-1);
        }
        return count;
     }
};

//3
class Solution {
public:
     int  NumberOf1(int n) {
        int count=0;
        int i=0;
        unsigned int flag;
        while(flag!=0)
        {
			if((n&flag)!=0)
			{
				count++;
			}
			flag<<=1;
        }
        return count;
     }
};


