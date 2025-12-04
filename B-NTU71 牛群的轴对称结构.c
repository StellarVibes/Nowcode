bool _isSameTree(struct TreeNode* p, struct TreeNode* q)
{
    if(p==NULL&&q==NULL)
    {
        return true;
    }
    if(p==NULL||q==NULL)
    {
        return false;
    }
    if(p->val!=q->val)
    {
        return false;
    }
    return _isSameTree(p->left,q->right) && _isSameTree(p->right,q->left);
}

bool isSymmetric(struct TreeNode* root ) {
    return _isSameTree(root->left,root->right);
}