struct ListNode* deleteDuplicates(struct ListNode* head ) {
    if(head== NULL)
    {
        return head;
    }
    while(head->next&&head->val==head->next->val)
    {
        head=head->next;
    }
    if(head->next== NULL)
    {
        return head;
    }
    struct ListNode* cur = head;
    while(cur)
    {
        if(cur->next!= NULL&&cur->val==cur->next->val)
        {
            cur->next=cur->next->next;
            cur=cur->next;
        }
        else {
            cur=cur->next;
        }
    }
    return head;
}