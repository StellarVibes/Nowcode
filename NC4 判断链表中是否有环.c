#include <stdbool.h>

bool hasCycle(struct ListNode* head ) 
{
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while(fast&&slow)
    {
        if(fast->next==NULL)
        {
            return false;
        }
        fast = fast->next->next;
        slow = slow->next;
        if(fast==NULL)
        {
            return false;
        }
        if(fast==slow)
        {
            return true;
        }
        
    }
    return false;
}