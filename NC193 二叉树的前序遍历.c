void fuc(struct TreeNode* root, int* arr,int * count)
{
    if (root == NULL)
    {
        return;
    }
    arr[*count] = root->val;
    //printf("%d ",arr[*count]);
    //printf("%d\n",*count);
    (*count)++;
    fuc(root->left, arr,count);
    
    fuc(root->right, arr,count);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = (int*)malloc(sizeof(4)*1000);
    int count = 0;
    fuc(root, arr,&count);
    //while(*arr)
    //{
        //printf("%d ",*arr);
        //arr++;
    //}
    *returnSize=count;
    return arr;
}