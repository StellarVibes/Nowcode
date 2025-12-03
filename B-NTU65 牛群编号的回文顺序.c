struct ListNode* reverse(struct ListNode* head)
{
    struct ListNode* next = head->next;
    head->next=NULL;
    while(next)
    {
        struct ListNode* nnext = next->next;
        next->next=head;
        head= next;
        next=nnext;
    }
    return head;
}

bool isPalindrome(struct ListNode* head ) {
    if(head->next==NULL)
    {
        return true;
    }
    struct ListNode* tmp = head;
    int count = 0;
    while(tmp)
    {
        count++;
        tmp = tmp ->next;
    }
    count/=2;
    struct ListNode* cur = head;
    while(count)
    {
        count--;
        cur=cur->next;
    }
    struct ListNode* list = reverse(cur);
    while(list)
    {
        if(list->val!=head->val)
        {
            return false;
        }
        list=list->next;
        head=head->next;
    }
    return true;
}