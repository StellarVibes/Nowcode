bool hasCycle(struct ListNode* head ) {
    if(head->next==NULL)
    {
        return false;
    }
    struct ListNode* fast = head;
    struct ListNode* low = head;
    while(fast->val!=low->val||fast==head)
    {
        fast=fast->next->next;
        low=low->next;
        if(fast->next==NULL||fast->next->next==NULL)
        {
            printf("%d ",fast->val);
            return false;
        }
    }
    return true;
}