#include <stdbool.h>

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
    return _isSameTree(p->left,q->left) && _isSameTree(p->right,q->right);
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q ) {
    return _isSameTree(p,q);
}