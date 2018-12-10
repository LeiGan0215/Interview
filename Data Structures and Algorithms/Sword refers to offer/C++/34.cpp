class Solution {
public:
	int Partition(vector<int> &data,int begin,int end){
		int left=begin;
		int right=end;
		int key=data[start];
		while(left<right)
		{
			while(left<right&&data[right]>=key)
			{
				right--;
			}
			if(left<right)
			{
				data[left++]=data[right];
			}
			while(left<right&&data[left]<=key)
			{
				left++;
			}
			if(left<right)
			{
				data[right--]=data[left];
			}
			
		}
		data[left]=key;
		return left;
	}
	
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(k<1||input.size()<k)
        {
        	return res;
        }
        int start=0;
        int end=input.size()-1;
        int index=Partition(res,start,end);
        while(index!=k-1)
        {
        	if(index>k-1)
        	{
        		end=index-1;
        		index=Partition(res,start,end);
        	}
        	else
        	{
        		start=index+1;
        		index=Partition(res,start,end);
        	}
        }
        for(int i=0;i<k;i++)
		{
			res.push_back(input[i]);
		} 
        return res;
    }
};
