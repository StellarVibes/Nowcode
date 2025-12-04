struct ListNode* reverseBetween(struct ListNode* head, int left, int right ) {
    struct ListNode* Left = head;
    struct ListNode* Right = head;
    left--;
    right--;
    while(left)
    {
        Left=Left->next;
        left--;
    }
    while(right)
    {
        Right=Right->next;
        right--;
    }
    struct ListNode* tmp = Left;
    int arr[1000]={0};
    int size = 0;
    while(tmp!=Right->next)
    {
        arr[size++]=tmp->val;
        tmp = tmp->next;
    }
    tmp = Left;
    for(int i = size-1;i>=0;i--)
    {
        tmp->val=arr[i];
        tmp=tmp->next;
    }
    return head;
}