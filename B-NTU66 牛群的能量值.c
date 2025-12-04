struct ListNode* addEnergyValues(struct ListNode* l1, struct ListNode* l2 ) {
    if(l1==NULL)
    {
        return l2;
    }
    if(l2== NULL)
    {
        return l1;
    }
    struct ListNode* list1=l1;
    struct ListNode* list2=l2; 
    int count1 = 0;
    int count2 = 0;
    while(list1)
    {
        count1++;
        list1=list1->next;
    }
    while(list2)
    {
        count2++;
        list2=list2->next;
    }
    struct ListNode* tmp1=l1;
    struct ListNode* tmp2=l2; 
    if(count2>count1)
    {
        tmp1=l2;
        tmp2=l1; 
    }
    struct ListNode* list=tmp1; 
    while(tmp2)
    {
        tmp1->val+=tmp2->val;
        //printf("%d ",tmp1->val);
        tmp1=tmp1->next;
        tmp2=tmp2->next;
    }
    struct ListNode* cur=list;
    while(cur->next)
    {
        if(cur->val>9)
        {
            cur->val-=10;
            cur->next->val++;
        }
        cur=cur->next;
    }
    if(cur->val>9)
    {
        struct ListNode* tmp=(struct ListNode*)malloc(sizeof(struct ListNode));
        tmp->next=NULL;
        tmp->val=1;
        cur->val-=10;
        cur->next=tmp;
    }
    return list;
}