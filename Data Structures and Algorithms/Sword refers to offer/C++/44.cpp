//1
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int len=numbers.size();
        if(len==0)
        {
            return 0;
        }
        else if(len==1)
        {
            return numbers[0];
        }
        sort(numbers.begin(),numbers.end());
        int count=1;
        int res=0;
        for(int i=0;i<len-1;i++)
        {
            if(numbers[i]==numbers[i+1])
            {
                count++;
            }
            else
            {
                count=1;
            }
            if(count>len/2)
            {
                res=numbers[i];
                break;
            }
        }
        return res;
    }
}; 
