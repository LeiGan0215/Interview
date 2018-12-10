//1
class Solution {
public:
    int Sum_Solution(int n) {
        int ans=n;
        if(n>0)
        ans=ans+Sum_Solution(n-1);
        return ans;
    }
};

//2 
