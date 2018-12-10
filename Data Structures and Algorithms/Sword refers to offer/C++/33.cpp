//1
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
		unordered_map<int,int> map;
		for(int i=0;i<data.size();i++)
		{
			map[data[i]]++;
		}
		vector<int> res;
		for(int i=0;i<data.size();i++)
		{
			if(map[data[i]]==1)
			{
				res.push_back(data[i]);
			}
			*num1=res[0];
			*num2=res[1];
		}
    }
};

//2

