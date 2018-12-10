//1 
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
		 vector<int> res;
		 int row=matrix.size();
		 int col=matrix[0].size();
		 int left=0;
		 int right=col-1;
		 int top=0;
		 int btm=row-1;
		 while(left<=right&&top<=btm)
		 {
		 	for(int i=left;i<=right;i++)
			 {
			 	res.push_back(matrix[top][i]);
			 } 
			 if(top<btm)
			 	for(int i=top+1;i<=btm;i++)
			 	{
			 		res.push_back(matrix[i][right]);
			 	}
			 if(top<btm&&left<right)
			 	for(int i=right-1;i>=left;i--)
				 {
				 	res.push_back(matrix[btm][i]);
				 } 
			 if(top+1<btm&&left<right)
			 	 for(int i=btm-1;i>=top+1;i--)
				 {
				 	res.push_back(matrix[i][left]);
				 } 
			left++;
			right--;
			top++;
			btm--;
		 }
		 return res;
    }
};

//2
class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
		        
    }
}; 
