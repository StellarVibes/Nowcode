struct ListNode* mergeEnergyValues(struct ListNode* l1, struct ListNode* l2 ) {
    if(l1==NULL)
    {
        return l2;
    }
    if(l2==NULL)
    {
        return l1;
    }
    struct ListNode* head1=l1,* head2=l2,* tmp=l2,* cur=l2;
    int arr[1000]={0};
    int i = 0;
    while(l1&&l2)
    {
        if(l1->val>=l2->val)
        {
            arr[i++]=l1->val;
            l1=l1->next;
        }
        else {
            arr[i++]=l2->val;
            l2=l2->next;
        }
    }
    if(l1!=NULL)
    {
        while(l1)
        {
            arr[i++]=l1->val;
            l1=l1->next;
        }
    }
    if(l2!=NULL)
    {
        while(l2)
        {
            arr[i++]=l2->val;
            l2=l2->next;
        }
    }
    while(head2->next)
    {
        head2=head2->next;
    }
    head2->next=head1;
    i=0;
    while(tmp)
    {
        tmp->val=arr[i++];
        printf("%d ",tmp->val);
        tmp=tmp->next;
    }
    return cur;
}