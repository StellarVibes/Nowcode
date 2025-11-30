struct ListNode* deleteNode(struct ListNode* head, int val ) 
{
    struct ListNode* head1=head;
    struct ListNode* prev=NULL;
    if(head->val==val)
    {
        return head->next;
    }
    while(head)
    {
        if(head->val==val&&prev!=NULL)
        {
            prev->next=head->next;
        }
        prev=head;
        head=head->next;
    }
    return head1;
}