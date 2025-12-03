void fuc(struct TreeNode* root,int* i)
{
    if(root==  NULL)
    {
        return;
    }
    fuc(root->left,i);
    fuc(root->right,i);
    if((root->val)>*i)
    {
        *i=(root->val);
        return;
    }
}

int findMaxHeight(struct TreeNode* root ) 
{
    int i = 0;
    fuc(root,&i);
    return i;
}