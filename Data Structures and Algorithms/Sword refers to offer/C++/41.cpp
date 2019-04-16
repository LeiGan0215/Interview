//1
class Solution {
public:
    vector<int> PrintFromTopToBottom(TreeNode* root) {
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL)
            return res;
        while(q.empty()!=true)
        {
            TreeNode* Node=q.front();
            q.pop();
            res.push_back(Node->val);
            if(Node->left!=NULL)
                q.push(Node->left);
            if(Node->right!=NULL)
                q.push(Node->right);
            
        }
        return res;

    }
};
