//1
class Solution {
public:
	vector<vector<int>> res;
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) {
    	if(root==NULL)
    	{
    		return res;
    	}
    	vector<int> path;
    	Findpath(root,expectNumber,path,0);
    	return res;
    }
    void Findpath(TreeNode* root,int expectNumber,vector<int> path,int sum){
    	sum+=root->val;
    	path.push_back(root->val);
    	if(sum==expectNumber&&(root->left==NULL&&root->right==NULL))
    	{
    		res.push_back(path);
    	}
    	if(root->left!=NULL)
    		Findpath(root->left,expectNumber,path,sum);
    	if(root->right!=NULL)
    		Findpath(root->right,expectNumber,path,sum);
    }
};
