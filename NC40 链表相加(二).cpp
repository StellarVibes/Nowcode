class Solution {
public:
    ListNode* addInList(ListNode* head1, ListNode* head2) 
    {
        vector<int> v1;
        vector<int> v2;
        ListNode* tmp1 = head1,* tmp2 = head2,* prev = nullptr;
        while(tmp1)
        {
            v1.push_back(tmp1->val);
            prev = tmp1;
            tmp1 = tmp1->next;
        }
        while(tmp2)
        {
            v2.push_back(tmp2->val);
            tmp2 = tmp2->next;
        }
        reverse(v1.begin(),v1.end());
        reverse(v2.begin(),v2.end());
        vector<int> max = v1;
        vector<int> min = v2;
        if(min.size()>max.size())
        {
            max = v2;
            min = v1;
        }
        int carry = 0;
        for(int i = 0;i<max.size();i++)
        {
            if(i>=min.size())
            {
                max[i]+=0+carry;
            }
            else {
                max[i]+=min[i]+carry;
            }
            
            carry = 0;
            if(max[i]>=10)
            {
                max[i]-=10;
                carry = 1;
            }
        }
        if(carry)
        {
            max.push_back(1);
        }
        reverse(max.begin(),max.end());
        for(auto &e:max)
        {
            cout<<e<<" ";
        }
        prev->next = head2;
        ListNode* cur = head1;
        for(auto &e:max)
        {
           cur->val = e;
           prev = cur;
           cur = cur->next;
        }
        prev ->next = nullptr;
        return head1;
    }
};