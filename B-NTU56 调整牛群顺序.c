struct ListNode* moveNthToEnd(struct ListNode* head, int n ) {
    if(head->next==NULL||n==1)
    {
        return head;
    }
    struct ListNode* head1 = head;
    struct ListNode* head2 = head;
    int count = 1;
    while(head1->next)
    {
        head1=head1->next;
        count++;
    }
    int num = count-n;
    struct ListNode* prev = head1;
    while(num)
    {
        prev = head2;
        head2=head2->next;
        num--;
    }
    if(count-n==0)
    {
        head=head->next;
        prev->next=head2;
        head2->next=NULL;
        return head;
    }
    prev->next=head2->next;
    head2->next=NULL;
    head1->next=head2;
    return head;
}