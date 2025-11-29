struct ListNode* rotateLinkedList(struct ListNode* head, int k ) 
{
    if(head==NULL)
    {
        return NULL;
    }
    struct ListNode* head1=head;
    int len = 1;
    while(head1->next)
    {
        head1=head1->next;
        len++;
    }
    if(len==1)
    {
        return head;
    }
    k%=len;
    head1->next=head;
    int n = len-k;
    struct ListNode* prev=NULL;
    while(n)
    {
        prev=head;
        head=head->next;
        n--;
    }
    prev->next=NULL;
    return head;
}