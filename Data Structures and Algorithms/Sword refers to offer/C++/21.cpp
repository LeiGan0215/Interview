//1
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode){
		if(pNode==NULL)
		{
			return NULL;
		}
		TreeLinkNode* cur;
		if(pNode->right!=NULL)
		{
			cur=pNode->right;
			while(cur->left!=NULL)
			{
				cur=cur->left;
			}
			return cur;
		}
		cur=pNode;
		if(cur->next==NULL)
			return NULL;
		if(cur->next->left==cur)
		{
			return cur->next;
		}
		cur=pNode->next;
		while(cur->next!=NULL)
		{
			if(cur->next->left==cur)
				return cur->next;
			cur=cur->next;
		}
		return NULL;
    }
};
