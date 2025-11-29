typedef struct node
{
    int val;
    struct node* next;
}node;

node* buynode(int x)
{
    node* tmp = (node*)malloc(sizeof(node));
    tmp->next = NULL;
    tmp->val = x;
    return tmp;
}

int ysf(int n, int m) 
{
    node* tmp = NULL;
    node* head = NULL;
    for (int i = 1; i <= n; i++)
    {
        node* cur = buynode(i);
        if (tmp == NULL)
        {
            tmp = cur;
            head = cur;
        }
        else
        {
            tmp->next = cur;
            tmp = cur;
        }
    }
    tmp->next = head;
    int count = 1;
    while (head->next != head)
    {
        node* prev = head;
        head = head->next;
        count++;
        if (count == m)
        {
            prev->next = head->next;
            count = 1;
            head = prev->next;
        }
    }
    return head->val;
}