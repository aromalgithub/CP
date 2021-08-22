int isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL) return 1;
    else if(A==NULL || B==NULL) return 0;

    int l = isSameTree(A->left,B->left);
    int r = isSameTree(A->right,B->right);
    if( l==1 && r==1 ) return (A->val==B->val) ? 1 : 0; 
    return 0;
}
