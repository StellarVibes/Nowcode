class Solution {
public:
    ListNode* sortList(ListNode* head) 
    {
        vector<int> v;
        ListNode* tmp = head;
        while(tmp)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        sort(v.begin(),v.end());
        tmp = head;
        for(auto &e : v)
        {
            tmp->val = e;
            tmp = tmp->next;
        }
        return head;
    }
};