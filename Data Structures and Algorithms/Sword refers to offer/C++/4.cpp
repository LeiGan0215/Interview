//1
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int length=pre.size();
        int value=pre[0];
        TreeNode* root=new TreeNode(value); 
        int i;
        for(i=0;i<length;i++)
        {
        	if(value==vin[i])
        		break;
        }
		if(i>=length)
			return NULL;
		int leftlength=i;
		int rightlength=length-1-i;
		vector<int> preleft(leftlength),vinleft(leftlength); 
		vector<int>	preright(rightlength),vinright(rightlength);
		for(int j=0;j<length;j++)
		{
			if(j<leftlength)
			{
				preleft[j]=pre[j+1];
				vinleft[j]=vin[j];
			}
			else if(j>rightlength)
			{
				preright[j-i-1]=pre[j];
				vinright[j-i-1]=vin[j];
			}
		}
		root->left=reConstructBinaryTree(preleft,vinleft); 
		root->right=reConstructBinaryTree(preright,vinright);
		return root;
    }
};
