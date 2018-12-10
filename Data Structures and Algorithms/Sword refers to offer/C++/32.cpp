//1
 class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
		if(pRoot==NULL)
		{
			return true;
		} 
		int leftDepth=TreeDepth(pRoot->left);
		int rightDepth=TreeDepth(pRoot->right);
		if(fabs(leftDepth-rightDepth)<=1)
		{
			return IsBalanced_Solution(pRoot->left)&&IsBalanced_Solution(pRoot->right);
		}
		else
		{
			return false;
		}
    }
    int TreeDepth(TreeNode* pRoot)
    {
    	if(pRoot==NULL)
    	{
    		return 0;
    	}
    	int leftDepth = TreeDepth(pRoot->left);
        int rightDepth = TreeDepth(pRoot->right);
		
		return max(leftDepth,rightDepth)+1; 
    }
};

//2
 class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
    	int *depth;
		return IsVALWithDepth(pRoot,depth);
    }
    bool IsVALWithDepth(TreeNode *root, int *depth){
    	if(root==NULL)
    	{
			*depth=0;
			return true;
		} 
		int leftDepth,rightDepth;
		bool left=IsVALWithDepth(root->left,&leftDepth);
		bool right=IsVALWithDepth(root->right,&rightDepth);
		if(left==true&&right==true)
		{
			if(fabs(leftDepth - rightDepth) <= 1)
			{
				*depth=max(leftDepth, rightDepth) + 1;
				return true;
			}
		}
		return false;
    }
};


