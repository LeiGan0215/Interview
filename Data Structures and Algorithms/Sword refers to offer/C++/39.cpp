class Solution {
public:
    ListNode* deleteDuplication(ListNode* pHead)
    {
		ListNode *first = new ListNode(-1);
		first->next=pHead;
		ListNode *last=first;
		ListNode *p=pHead;
		while(p!=NULL&&p->next!=NULL)
		{
			if(p->val==p->next->val)
			{
				int val=p->val;
				while(p!=NULL&&p->val==val)
				{
					p=p->next;
				}
				last->next=p;
			}
			else
			{
				last=p;
				p=p->next;
			}
			
		}
		return first->next;
    }
};
