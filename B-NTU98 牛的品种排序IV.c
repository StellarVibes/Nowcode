struct ListNode* sortCowsIV(struct ListNode* head ) {
    int count = 0;
    int num = 0;
    struct ListNode* tmp= head;
    while(tmp)
    {
        if(tmp->val==1)
        {
            tmp->val=0;
            count++;
        }
        num++;
        tmp=tmp->next;
    }
    if(count==0)
    {
        return head;
    }
    if(count==1&&head->next==NULL)
    {
        head->val=1;
        return head;
    }
    struct ListNode* cur= head;
    count = num-count;
    while(count)
    {
        count--;
        cur=cur->next;
    }
    while(cur)
    {
        cur->val=1;
        cur=cur->next;
    }
    return head;
}