class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root)
        {
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty())
            {
                int a=q.size();
                vector<int> temp;
                while(a)
                {
                    TreeNode* begin = q.front();
                    q.pop();
                    temp.push_back(begin->val);
                    if(begin->left)     q.push(begin->left);
                    if(begin->right)    q.push(begin->right);
                    a--;
                }
                result.push_back(temp);
            }
        }
        return result;
    }
};
