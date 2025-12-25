struct ListNode* deleteNodes(struct ListNode* head ) {
    if(head->next==NULL)
    {
        return head;
    }
    if(head->next->next==NULL)
    {
        return head;
    }
    struct ListNode* prev = head;
    struct ListNode* tmp = head->next;
    while(tmp->next!=NULL)
    {
        if(tmp->val>prev->val&&tmp->val>tmp->next->val)
        {
            prev->next=tmp->next;
            tmp=prev->next;
        }
        else{
            prev = tmp;
            tmp=tmp->next;
        }
    }
    return head;
}