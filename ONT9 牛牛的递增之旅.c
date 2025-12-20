struct ListNode* removeDuplicates(struct ListNode* head ) 
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL)
    {
        return head;
    }
    while(head)
    {
        if(head->next&&head->val==head->next->val)
        {
            head=head->next;
        }
        else 
        {
            break;
        }
    }
    struct ListNode* tmp = head;
    struct ListNode* head1 = head;
    while(tmp)
    {
        if(tmp->val==head1->val)
        {
            tmp=tmp->next;
        }
        else
        {
            head1->next=tmp;
            head1=tmp;
        }
    }
    head1->next=tmp;
    return head;
}