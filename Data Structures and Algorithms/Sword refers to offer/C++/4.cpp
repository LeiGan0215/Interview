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

//2
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int len=vin.size();
        if(len==0)
            return NULL;
        vector<int> left_pre,left_vin;
        vector<int> right_pre,right_vin;
        TreeNode *head=new TreeNode(pre[0]);
        int index=0;
        for(int i=0;i<len;i++)
        {
            if(pre[0]==vin[i])
            {
                index=i;
                break;
            }
        }
        for(int i=0;i<index;i++)
        {
            left_pre.push_back(pre[i+1]);
            left_vin.push_back(vin[i]);
            
        }
        
        for(int j=index+1;j<len;j++)
        {
            right_pre.push_back(pre[j]);
            right_vin.push_back(vin[j]);
            
        }
        head->left=reConstructBinaryTree(left_pre,left_vin);
        head->right=reConstructBinaryTree(right_pre,right_vin);
        
        
        return head;

    }
}; 
