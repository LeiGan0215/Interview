//1
class Solution {
public:
	bool IsUglyNumber(int number)
	{
		while(number%5==0)
		{
			number/=5;
		}
		while(number%3==0)
		{
			number/=3;
		} 
		while(number%2==0)
		{
			number/=2;
		}
		return (number==1);
	} 
    int GetUglyNumber_Solution(int index) {
    	int count=1;
    	int num=0;
    	while(count<=index)
    	{
    		num++;
    		if(IsUglyNumber(num))
    		{
    			count++;
    		}
    	}
    	return num;
    }
}; 

//2
class Solution {
public:
	vector<int> ugly;
	int min(int a,int b,int c){
		int temp=(a<b?a:b);
		return (temp<c?temp:c); 
	}
    int GetUglyNumber_Solution(int index) {
    	ugly[0]=1;
    	int idex2=0;
    	int idex3=0;
    	int idex5=0;
    	int idex=0;
    	int val=min(ugly[idex2]*2,ugly[idex3]*3,ugly[idex5]*5);
    while(idex<index){
    	if(val==ugly[idex2]*2)
    	{
    		idex2++;
    	}
    	if(val==ugly[idex3]*3)
    	{
    		idex3++;
    	}
    	if(val==ugly[idex5]*5)
    	{
    		idex5++;
    	}
    	ugly[idex++]=val;
    }
    	int result = ugly[N - 1];   
        return result;  
    }
}; 

