int cmp(const void *a,const void *b) 
{
	return *(int*)a-*(int*)b;
}

struct ListNode* sortInList(struct ListNode* head ) {
    int arr[100000]={0};
    struct ListNode* head1=head;
    struct ListNode* head2=head;
    int i = 0;
    int j = 0;
    while(head1)
    {
        arr[i++]=head1->val;
        head1=head1->next;
    }
    qsort(arr, i, sizeof(int), cmp);
    while(head2)
    {
        head2->val=arr[j++];
        head2=head2->next;
    }
    return head;
}