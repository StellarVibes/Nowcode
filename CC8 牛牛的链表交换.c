#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int a;
	struct list* next;
};

void Buynode(int i, struct list** prve)
{
	struct list* head = (struct list*)malloc(sizeof(struct list));
	head->a  = i;
	head->next = NULL;
	(*prve)->next = head;
}

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	struct list* phead = (struct list*)malloc(sizeof(struct list));
	struct list* ret = phead;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		Buynode(m, &ret);
		ret = ret->next;
	}
	struct list* cur = phead->next;
	struct list* nest = phead->next->next ;
	phead->next = nest;
	cur->next = nest->next;
	nest->next = cur;
	struct list* pat = phead->next;
	while (pat->next->next->next)
	{
		pat = pat->next;
	}
	struct list* nnext = pat->next;
	struct list* tail = pat->next->next;
	pat->next = tail;
	tail->next = nnext;
	nnext->next = NULL;
	for (int i = 0; i < n; i++)
	{
		printf("%d ", phead->next ->a );
		phead = phead->next;
	}
    
	return 0;
}