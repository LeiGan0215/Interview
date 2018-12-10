//1
class Solution {
public:
    int count=0;
    TreeNode* KthNode(TreeNode* pRoot, int k){
        if(pRoot==NULL)
        {
        	return NULL;
        }
        TreeNode* ret;
        if((ret=KthNode(pRoot->left,k))!=NULL)
        {
        	return ret;
        }
        count++;
        if(k==count)
        {
        	return pRoot;
        }
        if((ret=KthNode(pRoot->right,k))!=NULL)
        {
        	return ret;
        }
        return NULL;
    }
};

