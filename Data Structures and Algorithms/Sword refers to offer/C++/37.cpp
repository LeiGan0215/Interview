class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> res;
        if(array.size()<2)
        {
            return res;
        }
        int begin=0;
        int end=array.size()-1;
        long cur;
        while(begin<end)
        {
            cur=array[begin]+array[end];
            if(sum==cur)
            {
                res.push_back(array[begin]);
                res.push_back(array[end]);
                break;
            }
            else if(sum>cur)
            {
                begin++;
            }
            else if(sum<cur)
            {
                end--;
            }
        }
        return res;
    }
};
