//1
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
     return bst(sequence,0,sequence.size()-1);
    }
private:
    bool bst(vector<int> seq,int begin,int end){
        if(seq.empty()||begin>end)
            return false;
        int i=begin;
        for(i;i<end;i++)
            if(seq[i]>seq[end])
                break;
        int j=i;
        for(j;j<end-1;j++)
            if(seq[j]<seq[end])
                return false;
        bool left=true;
        if(i>begin)
            left=bst(seq,begin,i-1);
        bool right=true;
        if(i<end-1)
            right=bst(seq,i,end-1);
        return left&&right;
    }
};

//2
class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
    	
    }
};
