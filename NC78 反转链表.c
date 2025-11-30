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

struct ListNode* ReverseList(struct ListNode* head ) {
    struct ListNode*hhead = head;
    int len = 0;
    while(hhead)
    {
        hhead = hhead->next;
        len++;
    }
    if(len==0)
    {
        return NULL;
    }
    else if(len==1)
    {
        return head;
    }
    else
    {
        struct ListNode* phead=reserve(&head);
        return phead;
    }
}