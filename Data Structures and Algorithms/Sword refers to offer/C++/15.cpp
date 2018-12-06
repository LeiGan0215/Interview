//1
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* pNode=pHead;
        ListNode* pPre=NULL;
        ListNode* pnext=NULL;
        while(pNode!=NULL)
        {
            pnext=pNode->next;
            pNode->next=pPre;
            pPre=pNode;
            pNode=pnext;
        }
        return pPre;
    }
}; 

//2
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if(pHead==NULL)
            return NULL;
        stack<ListNode*> temp;
        ListNode* Node=pHead;
        while(Node!=NULL)
        {
            temp.push(Node);
            Node=Node->next;
        }
        ListNode* Head=temp.top();
        temp.pop();
        ListNode* node=Head;
        while(!temp.empty())
        {
            node->next=temp.top();
            temp.pop();
            node=node->next;
        }
        return Head;
    }
}; 
