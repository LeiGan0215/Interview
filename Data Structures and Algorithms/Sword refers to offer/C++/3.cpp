//1 
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        ListNode* node=head;
        stack<int> st;
		while(node!=NULL)
		{
			st.push(node->val);
			node=node->next;
		} 
        vector<int> result;
        while(!st.empty())
        {
        	result.push_back(st.top());
        	st.pop();
        }
        return result;     
    }
};

//2
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> result;
		printListFromTailToHeadRecursion(head,result);
		return result; 
    }
    void printListFromTailToHeadRecursion(ListNode* head,vector<int> &result){
    	if(head!=NULL)
    	{
    		printListFromTailToHeadRecursion(head->next,result);
    		result.push_back(head->val);
    	}
    }
    
};

//3
class Solution {
public:
	vector<int> result;
    vector<int> printListFromTailToHead(ListNode* head) {
        if(head!=NULL)
		{
			printListFromTailToHeadRecursion(head->next,result);
			result.push_back(head->val);
		}
		return result; 
	}   
};



