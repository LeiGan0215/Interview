//1 
class Solution {
public:
    bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2){
		if(pRoor1==NULL||pRoot2==NULL)
		{
			return false;
		}
		bool result;
		if(pRoot1->val==pRoot2->val)
		{
			result=DoesParentHaveChild(pRoot1,pRoot2);
		}
		if(result!=true)
		{
			return HasSubtree(pRoot1->left,pRoot2)||HasSubtree(pRoot1->right,pRoot2);
		}
		else
		{
			return true;
		}
	}
	
	bool DoesParentHaveChild(TreeNode* parent,TreeNode* child)
	{
		if(child==NULL)
		{
			return true;
		}
		else if(parent==NULL)
		{
			return false;
		}
		if(parent->val!=child->val)
		{
			return false;
		} 
		else
		{
			return DoesParentHaveChild(parent->left,child->left)&&DoesParentHaveChild(parent->right,child->right);
		}
	} 
} 

