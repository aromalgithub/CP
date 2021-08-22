vector<int> levelOrderTraversal(TreeNode* A) {
    queue<TreeNode*> q;
    q.push(A);
    vector<int> ans;
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode* t = q.front();
            q.pop();
            ans.push_back(t->val);
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
        }
    }
    return ans;
}
