//1
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        bool isFound=false;
		for(int i=0;i<array.size();i++)
		{
			for(int j=0;j<array[i].size();j++)
				if(false==isFound&&target==array[i][j])
					isFound=true;
			
		} 
                 
                
    }
    
    return isFound;
};

//2
class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
       bool res=false;
	   int row=array.size();
	   int col=array[0].size();
	   for(int i=0,j=col-1;(i>=0&&i<row)&&(j>=0&&j<col);)
	   {
	   	if(target==array[i][j])
	   	{
	   		res=true;
	   		break;
	   	}
	   	else if(target<array[i][j])
	   		j--;
	   	else if(target>array[i][j])
	   		i++;
	   } 
	   return res;
	}
};
