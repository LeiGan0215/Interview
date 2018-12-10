//1
class Solution {
public:
    int TreeDepth(TreeNode* pRoot)
    {
        if(pRoot==NULL)
        {
            return 0;
        }
        else
        {
            int leftDepth=TreeDepth(pRoot->left);
            int rightDepth=TreeDepth(pRoot->right);
            
            return max(leftDepth,rightDepth)+1;
        }
    }
};


