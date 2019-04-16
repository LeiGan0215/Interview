//1
class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
        if(n<1||m<1)
           return -1;
	   if(n==1)
	   {
	   	return 0;
	   } 
	   return (LastRemaining_Solution(n-1,m)+m)%n;
    }
};

//2
class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
	   int last=0;
	   for(int i=2;i<=n;i++)
	   {
	   	last=(last+m)%i;
	   }
	   return last;
    }
};
