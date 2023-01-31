class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(root){
            stack<TreeNode*> s;
            s.push(root);
            while(!s.empty()){
                TreeNode* temp=s.top();
                if(temp->left){
                    s.push(temp->left);
                    temp->left=NULL;
                }
                else if(temp->right){
                    s.push(temp->right);
                    temp->right=NULL;
                }
                else{
                    s.pop();
                    ans.push_back(temp->val);
                }
            }
        }
        return ans;
    }
};
