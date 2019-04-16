//1
class Solution {
public:
    string ReverseSentence(string str) {
        string res;
        stack<char> st1;
        stack<char> st2;
        for(auto i:str)
        {
            st1.push(i);
        }
        while(!st1.empty())
        {
            if(st1.top()!=' ')
            {
                st2.push(st1.top());
                st1.pop();
            }
            else
            {
                while(!st2.empty())
                {
                    res+=st2.top();
                    st2.pop();
                }
                res+=st1.top();
                st1.pop();
            }
        }
        while(!st2.empty())
        {
            res+=st2.top();
            st2.pop();
        }
        return res;
    }
};
 
//2 
class Solution {
public:
    string ReverseSentence(string str) {
        
    }
};
