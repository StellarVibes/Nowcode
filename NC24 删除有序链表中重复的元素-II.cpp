class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head == nullptr) return head;
        int arr[2001]={0};
        ListNode* cur = head;
        ListNode* prev = nullptr;
        while(cur)
        {
            arr[cur->val+1000]++;
            //cout<<cur->val<<" ";
            cur = cur->next;
        }
        cur = head;
        int flage = 1;
        for(int i = 0;i<2001;i++)
        {
            if(arr[i]==1)
            {
                cur->val = i-1000;
                prev = cur;
                cur = cur->next;
                //cout<< i<<" ";
                flage = 0;
            }  
        }
        if(flage) return nullptr;
        if(prev!=nullptr) prev->next = nullptr;
        return head;
    }
};