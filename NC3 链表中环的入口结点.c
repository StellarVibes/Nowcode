struct ListNode* EntryNodeOfLoop(struct ListNode* pHead ) 
{
    struct ListNode* fast=pHead;
    struct ListNode* slow=pHead;
    if(fast->next==NULL)
    {
        return NULL;
    }
    fast=fast->next->next;
    slow=slow->next;
    while(!(fast==slow))
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    fast=pHead;
    while(!(fast==slow))
    {
        fast=fast->next;
        slow=slow->next;
    }
    return fast;
}