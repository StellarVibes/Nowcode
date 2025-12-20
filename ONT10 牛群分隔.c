struct ListNode* cow_partition(struct ListNode* head, int x ) {
    int high[1000]={0};
    int low[1000]={0};
    struct ListNode* cur = head;
    int size1 = 0;
    int size2 = 0;
    while(cur)
    {
        if(cur->val<x)
        {
            low[size1++]=cur->val;
        }
        else 
        {
            high[size2++]=cur->val;
        }
        cur=cur->next;
    }
    cur = head;
    for(int i = 0;i<size1;i++)
    {
        cur->val=low[i];
        printf("%d ",cur->val);
        cur=cur->next;
    }
    for(int i = 0;i<size2;i++)
    {
        cur->val=high[i];
        printf("%d ",cur->val);
        cur=cur->next;
    }
    return head;
}