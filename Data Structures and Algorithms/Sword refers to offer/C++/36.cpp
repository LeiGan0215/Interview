class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> res;
        vector<int> curr;
        int start=1;
        int end=2;
        int mid=(sum+1)/2;
        int currsum=start+end;
        while(start<mid&&end<sum)
        {
            if(currsum==sum)
            {
                curr.clear();
                for(int i=start;i<=end;i++)
                {
                    curr.push_back(i);
                }
                res.push_back(curr);
                end++;
                currsum+=end;
            }
            else if(currsum>sum)
            {
                currsum-=start;
                start++;
            }
            else if(currsum<sum)
            {
                end++;
                currsum+=end;
            }
        }
        return res;
    }
};
