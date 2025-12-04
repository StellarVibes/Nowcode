class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        int count = 1;
        ListNode* tmp = nullptr;
        //if(lists.size()==0||(lists[0]==nullptr&&lists.size()==1))
        //{
            //return nullptr;
        //}
        //if(lists.size()==0)
            //return nullptr;
        if (lists.size() == 0)
            return nullptr;
        vector<int> v;
        for (int i = 0; i < lists.size(); i++)
        {
            while (lists[i] == nullptr)
            {
                //cout<<i<<endl;
                i++;
                if (i > lists.size())
                    return nullptr;
            }
            ListNode* head = lists[i];
            if (count)//count-- 有负数
            {
                tmp = head;
                count--;
            }
            cout << head->val << endl;
            while (head->next)
            {
                v.push_back(head->val);
                head = head->next;
            }
            v.push_back(head->val);
            if (i < lists.size() - 1)
            {
                while (lists[i + 1] == nullptr)
                {
                    i++;
                }
                if (i >= lists.size())
                {
                    head->next = nullptr;
                    break;
                }
                head->next = lists[i + 1];
                cout << head->val << "->" << "head->next" << lists[i + 1]->val << endl;
            }
            else 
            {
                head->next = nullptr;
            }
        }
        cout << v.size() << endl;
        sort(v.begin(), v.end());
        //ListNode* head = lists[0];
        //ListNode* tmp = head;
        ListNode* head = tmp;
        int i = 0;
        while (tmp)
        {
            cout << tmp->val << " ";
            tmp->val = v[i++];
            tmp = tmp->next;
        }
        return head;
    }
};