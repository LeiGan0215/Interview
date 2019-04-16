class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        if(pushV.empty()==true||popV.empty()==true)
            return false;
        stack<int> s;
        s.push(pushV[0]);
        int push,pop;
        for(push=0,pop=0;push<pushV.size()&&pop<popV.size();)
        {
            if(s.top()==popV[pop])
            {
                s.pop();
                pop++;
            }
            else
                s.push(pushV[++push]);
                
        }
        if(s.empty()==true)
            return true;
        else
            return false;
    }
};
