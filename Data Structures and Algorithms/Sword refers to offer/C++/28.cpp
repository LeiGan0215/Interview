//1 
class Solution {
public:
	vector<vector<int>> res;
	void LevelOrder(TreeNode* pRoot,int p){
		if(pRoot==NULL)
		{
			return;
		}
		if(res.size()==p)
		{
			res.push_back(vector<int> ()); 
		}
		res[p].push_back(pRoot->val);
		LevelOrder(pRoot->left,p+1);
		LevelOrder(pRoot->right,p+1);
	}
    vector<vector<int> > Print(TreeNode* pRoot) {
        LevelOrder(pRoot,0);
        for(int i=0;i<res.size();i++){
        	if(i&1)
        	{
        		reverse(res[i].begin(),res[i].end());
        	}
        }
        return res;
    } 
};

//2
class Solution {
public:
    vector<vector<int> > Print(TreeNode* pRoot) {
        
    } 
};
