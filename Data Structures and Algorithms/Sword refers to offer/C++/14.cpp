//1
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==NULL)
            return NULL;
        ListNode* left,*right;
		left=pListHead;
		right=pListHead;
		while(k&&right!=NULL)
		{
			right=right->next;
            k--;
		} 
        if(right==NULL&&k>0)
            return NULL;
		while(right!=NULL)
		{
			right=right->next;
			left=left->next; 
		}
		return left;
    }
};
