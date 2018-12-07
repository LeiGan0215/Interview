//1 
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL)
        	return pHead2;
        if(pHead2==NULL)
        	return pHead1;
		ListNode* left=pHead1;
		ListNode* right=pHead2;
		ListNode* Head=NULL;
		if(left->val<right->val)
		{
			Head=left;
			left=left->next;
		}
		else
		{
			Head=right;
			right=right->next;
		}
		ListNode* Node=Head;
		while(left!=NULL&&right!=NULL)
		{
			if(left->val<right->val)
			{
				Node->next=left;
				Node=Node->next;
				left=left->next;
			}
			else
			{
				Node->next=right;
				Node=Node->next;
				right=right->next;
			}
		}
		if(left!=NULL)
		{
			Node->next=left;
		}
		if(right!=NULL)
		{
			Node->next=right;
		}
		return Head;
    }
};

//2
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        if(pHead1==NULL)
        	return pHead2;
        if(pHead2==NULL)
        	return pHead1;
        ListNode* Head=NULL;
        if(pHead1->val<pHead2->val)
        {
        	Head=pHead1;
        	Head->next=Merge(pHead1->next,pHead2);
        }
        else
        {
        	Head=pHead2;
        	Head->next=Merge(pHead1,pHead2->next);
        }
        return Head;
    }
}; 
