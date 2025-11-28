struct ListNode* deleteDuplicates(struct ListNode* head ) 
{
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode* head1=head;
    struct ListNode* phead=(struct ListNode*)malloc(sizeof( struct ListNode));
    struct ListNode* pphead=phead;
    while(head1->next)
    {
        if((head1->val)!=(head1->next->val))
        {
            struct ListNode* nest=(struct ListNode*)malloc(sizeof( struct ListNode));
            phead->next=nest;
            nest->val=head1->val;
            phead=nest;
        }
        head1=head1->next;
    }
    if((phead->val)!=(head1->val))
    {
        struct ListNode* nest=(struct ListNode*)malloc(sizeof( struct ListNode));
        phead->next=nest;
        nest->val=head1->val;
        phead=nest;
    }
    return pphead->next;
}