class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) 
    {
        vector<int> v;
        ListNode* tmp = head;
        while(tmp)
        {
            v.push_back(tmp->val);
            tmp = tmp->next;
        }
        reverse(v.begin()+m-1,v.begin()+n);
        tmp = head;
        for(auto& e:v)
        {
            tmp->val = e;
            tmp= tmp->next;
        }
        return head;
    }
};