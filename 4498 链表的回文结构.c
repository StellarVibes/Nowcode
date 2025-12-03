/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/

struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* front = NULL;
    struct ListNode* mid = head;
    while(mid != NULL)
    {
        struct ListNode* end = mid->next;
        mid->next = front;
        front = mid;
        mid = end;
    }
    return front;
}

class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        ListNode* head=A;
        ListNode* phead=A;
        int len=0;
        while(head)
        {
            len++;
            head=head->next;
        }
        len=len/2;
        while(len)
        {
            len--;
            phead=phead->next;
        }
        struct ListNode* front= reverseList(phead);
        while(front&&A)
        {
            if(front->val!=A->val)
            {
                return false;
            }
            front=front->next;
            A=A->next;
        }
        return true;
    }
};