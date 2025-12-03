/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

/**
 * 
 * @param pListHead ListNode类 
 * @param k int整型 
 * @return ListNode类
 */

struct ListNode* FindKthToTail(struct ListNode* pListHead, int k ) {
    struct ListNode* phead = pListHead;
    int count = 0;
    while(phead)
    {
        count++;
        phead=phead->next;
    }
    if(k<1||k>count)
    {
        return NULL;
    }
    while(count-k)
    {
        count--;
        pListHead=pListHead->next;
    }

    return pListHead;
}