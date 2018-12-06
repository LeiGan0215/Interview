//1
class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
    	int node;
        if(stack1.empty()&&stack2.empty())
        	return -1;
        else
        {
        	if(stack2.empty())
        	{
        		while(!stak1.empty())
        		{
        			stack2.push(stack1.top());
        			stack1.pop();
        		}
        		node=stack2.top();
        		stack2.pop();
        	}
        }
        return node;
        
        }

private:
    stack<int> stack1;
    stack<int> stack2;
};
