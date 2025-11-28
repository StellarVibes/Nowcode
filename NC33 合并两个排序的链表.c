struct ListNode* Merge(struct ListNode* pHead1, struct ListNode* pHead2 ) 
{
   struct ListNode* head1=pHead1;
   struct ListNode* head2=pHead2;
   struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
   struct ListNode* phead=head;
   while(head1&&head2)
   {
    if((head1->val)<(head2->val))
    {
        struct ListNode* nest=(struct ListNode*)malloc(sizeof(struct ListNode));
        phead->next=nest;
        nest->val=head1->val;
        phead=nest;
        head1=head1->next;
    }
    else 
    {
        struct ListNode* nest=(struct ListNode*)malloc(sizeof(struct ListNode));
        phead->next=nest;
        nest->val=head2->val;
        phead=nest;
        head2=head2->next;
    }
   }
   if(head1!=NULL)
   {
    phead->next=head1;
   }
   if(head2!=NULL)
   {
    phead->next=head2;
   }
   return head->next;
}