//1 
class Solution {
public:
    string LeftRotateString(string str, int n) {
        int len=str.size();
        if(len==0)
            return "";
        n=n%len;
        str+=str;
        return str.substr(n,len);
    }
};

//2
class Solution {
public:
    string LeftRotateString(string str, int n) {
        int len=str.size();
        if(len==0)
        {
            return "";
        }
        n=n%len;
        Reverse(str,0,n-1);
        Reverse(str,n,len-1);
        Reverse(str,0,len-1);
        return str;
    }
    void Reverse(string &str,int left,int right)
    {
        while(left<right)
        {
            swap(str[left],str[right]);
            left++;
            right--;
        }
    }
};
