struct ListNode* reverseKGroup(struct ListNode* head, int k ) {
    int arr[1000]={0};
    struct ListNode* head1 = head;
    struct ListNode* tmp = head;
    int a = 1;
    while(head1)
    {
        arr[a++]=head1->val;
        head1=head1->next;
    }
    for(int i = k;i<a;i+=k)
    {
        int count = k;
        int size = i;
        while(count)
        {
            tmp->val=arr[size--];
            tmp=tmp->next;
            count--;
        }
    }
    return head;
}