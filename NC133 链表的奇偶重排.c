struct ListNode* oddEvenList(struct ListNode* head ) 
{
    if(head==NULL)
    {
        return NULL;
    }
    if(head->next==NULL||head->next->next==NULL)
    {
        return head;
    }
    struct ListNode* odd=head;
    struct ListNode* even=head->next;
    struct ListNode* node=head->next;
    while(even!=NULL&&even->next!=NULL)
    {
        struct ListNode* next = even->next;
        odd->next=even->next;
        even->next=next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=node;
    return head;
}