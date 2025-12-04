struct ListNode* rotateLeft(struct ListNode* head, int k ) {
    struct ListNode* tmp = head;
    int count = 1;
    while(tmp->next)
    {
        count++;
        tmp = tmp->next;
    }
    k%=count;
    int size = count-k-1;
    tmp->next= head;
    while(size)
    {
        head=head->next;
        size--;
    }
    struct ListNode* cur = head->next;
    head->next = NULL;
    return cur;
}