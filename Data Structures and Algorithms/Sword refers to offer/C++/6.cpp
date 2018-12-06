//1
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int min=rotateArray[0];
        for(int i=1;i<rotateArray.size();i++)
        {
        	if(rotateArray[i]<min)
        		min=rotateArray[i];
        }
        return min;
    }
};

//2
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        for(int i=0;i<rotateArray.size();i++)
        {
        	if(rotateArray[i]>rotateArray[i+1])
        		return rotateArray[i+1];
        }
        return rotateArray[0];
    }
};

//3
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size()==0)
        	return 0;
        int mid=0;
        int low=0;
		int high=rotateArray.size()-1;
		while(rotateArray[low] >= rotateArray[high])
		{
			if(high-low==1)
			{
				mid=high;
				break;
			}
			mid=(low+high)/2;
			if(rotateArray[low]==rotateArray[mid]&&rotateArray[mid]==rotateArray[high])
			{
				return MinOrder(rotateArray,low,high);
			}
			if(rotateArray[low]<=rotateArray[mid])
			{
				low=mid;
			}
			if(rotateArray[high]>=rotateArray[mid])
			{
				high=mid;
			}
		}
		return rotateArray[mid];
    }
    
    int MinOrder(vector<int> &rotateArray,int low,int high){
		int result=rotateArray[low];
		for(int i=low+1;i<high;i++)
		{
			if(rotateArray[i]<result)
				result=rotateArray[i];
		}
		return result;
	}
};


