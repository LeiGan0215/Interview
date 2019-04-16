//1
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
		ListNode* left=NULL;
		ListNode* right=NULL;
		for(left=pHead1;left!=NULL;left=left->next)
		{
			for(right=pHead2;right!=NULL;right=right->next)
			{
				if(left==right)
				{
					break;
				}
				
			}
			if(left==right)
			{
				break;
			}
		}
		 return left;
    }
};

//2
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
		stack<ListNode*> st1;
		stack<ListNode*> st2;
		ListNode* left=pHead1;
		ListNode* right=pHead2;
		while(left!=NULL)
		{
			st1.push(left);
			left=left->next;
		} 
		while(right!=NULL)
		{
			st2.push(right);
			right=right->next;
		}
		while(!st1.empty()&&!st2.empty())
		{
			left=st1.top();
			right=st2.top();
			if(left!=right)
			{
				break;
			}
			st1.pop();
			st2.pop();
		}
		if(left!=right)
		{
			return left->next;
		}
		else
		{
			return NULL;
		}
    }
};

//3
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
		ListNode* left=leftHead;
        ListNode* right=rightHead;
        while(left!=right)
        {
            left=(left==NULL)?rightHead:left->next;
            right=(right==NULL)?leftHead:right->next;
            
        }
        return left;
    }
};

//4
class Solution {
public:
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
	
    }
};

 
