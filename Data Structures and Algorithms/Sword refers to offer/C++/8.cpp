//1
class Solution {
public:
    int jumpFloor(int number) {
		if(number<=1)
			return number;
		int one=1;
		int two=2;
		int res=0;
		for(int i=3;i<=number;i++)
		{
			res=one+two;
			one=two;
			two=res;
		}  
		return res;
    }
};
