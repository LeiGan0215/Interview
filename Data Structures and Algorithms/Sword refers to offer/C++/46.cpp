//1
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            count+=NumberOf1(i);
        }
        return count;
    }
    int NumberOf1(int n)
    {
        int count=0;
        while(n!=0)
        {
            if(n%10==1)
            {
                count+=1;
            }
            n/=10;
        }
        return count;
    }
};

//2
 
 
