//1
class Solution {
public:
    int Fibonacci(int n) {
        if(n<=1)
        	return n;
        else
        	return Fibonacci(n-1)+Fibonacci(n-2);
    }
};

//2
class Solution {
public:
    int Fibonacci(int n) {
    	if(n<=1)
    		return n;
        long one=0;
        long two=1;
        long res=0;
        for(int i=2;i<=n;i++)
        {
        	res=one+two;
        	one=two;
        	two=res;
        }
        return res;
	}
};

//3

