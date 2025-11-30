struct ListNode* reserve(struct ListNode** phead)
{
    struct ListNode*head=*phead;
    struct ListNode*nest=head->next;
    head->next=NULL;
    while(nest->next)
    {
        struct ListNode*nnest=nest->next;
        nest->next=head;
        head=nest;
        nest=nnest;
    }
    nest->next=head;
    return nest;
}

bool isPail(struct ListNode* head ) 
{
    struct ListNode* phead=head;
    int len = 0;
    while(phead)
    {
        phead = phead->next;
        len++;
    }
    if(len==1)
    {
        return true;
    }
    len = len/2;
    struct ListNode* pphead=head;
    while(len)
    {
        len--;
        pphead=pphead->next;
    }
    struct ListNode* cur= reserve(&pphead);
    while(cur)
    {
        if((cur->val)!=(head->val))
        {
            return false;
        }
        cur = cur->next;
        head=head->next;
    }
    return true;
}