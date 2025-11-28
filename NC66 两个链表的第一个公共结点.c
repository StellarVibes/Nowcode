struct ListNode* FindFirstCommonNode(struct ListNode* pHead1, struct ListNode* pHead2 )
{
    struct ListNode* head1=pHead1;
    struct ListNode* head2=pHead2;
    int len1=0;
    int len2=0;
    if(pHead1==NULL||pHead2==NULL)
    {
        return NULL;
    }
    while(head1->next)
    {
        len1++;
        head1=head1->next;
    }
    while(head2->next)
    {
        len2++;
        head2=head2->next;
    }
    if(head2!=head1)
    {
        return NULL;
    }
    if(len1>=len2)
    {
        while(len1-len2)
        {
            pHead1=pHead1->next;
            len1--;
        }
    }
    else 
    {
        while(len2-len1)
        {
            pHead2=pHead2->next;
            len2--;
        }
    }
    while(pHead1&&pHead2)
    {
        if(pHead1==pHead2)
        {
            return pHead1;
        }
        pHead1=pHead1->next;
        pHead2=pHead2->next;
    }

    return NULL;
}