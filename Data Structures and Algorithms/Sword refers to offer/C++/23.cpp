//1
class Solution {
public:
	vector<vector<int>> res; 
    vector<vector<int>> Print(TreeNode* pRoot) {
    	if(pRoot==NULL)
		{
			return res;
		} 
		queue<TreeNode*> Q;
		Q.push(pRoot);
		while(!Q.empty())
		{
			vector<int> temp;
			int size=Q.size();
			for(int i=0;i<size;i++)
			{
				q=Q.front();
				temp.push_back(q->val);
				if(q->left!=NULL)
				{
					Q.push(q->left);
				}
				if(q->right!=NULL)
				{
					Q.push(q->right);
				}
				Q.pop();
			}
			res.push_back(temp);
		}
		return res;
		
    }
};
