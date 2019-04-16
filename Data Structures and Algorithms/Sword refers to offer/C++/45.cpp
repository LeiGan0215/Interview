//1
class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int len=array.size();
        if(len==0)
        {
            return 0;
        }
        int sum,Max=INT_MIN;
        for(int i=0;i<len;i++)
        {
            sum=0;
            for(int j=i;j<len;j++)
            {
                sum+=array[j];
                if(sum>Max)
                {
                    Max=sum;
                }
            }
        }
        return Max;
    }
};

//2
class Solution {
    int dp[1000];
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int len=array.size();
        if(len==0)
        {
            return 0;
        }
        int sum,Max=INT_MIN;
        int temp,start,end;
        dp[0]=array[0];
        for(int i=1;i<len;i++)
        {
            if(dp[i-1]<=0)
            {
                dp[i]=array[i];
                temp=i;
            }
            else
            {
                dp[i]=dp[i-1]+array[i];
            }
            if(dp[i]>Max)
            {
                Max=dp[i];
                start=temp;
                end=i;
            }
        }
        return Max;
    }
}; 

 
