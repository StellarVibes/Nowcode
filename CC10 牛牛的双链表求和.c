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
	head->a = i;
	head->next = NULL;
	(*prve)->next = head;
}

int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	struct list* phead1 = (struct list*)malloc(sizeof(struct list));
	struct list* ret = phead1;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		Buynode(m, &ret);
		ret = ret->next;
	}
	struct list* phead2 = (struct list*)malloc(sizeof(struct list));
	ret = phead2;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		Buynode(m, &ret);
		ret = ret->next;
	}
	struct list* tmp = phead2;
	ret = phead1;
	while (tmp->next)
	{
		tmp->next->a += ret->next->a;
		ret = ret->next;
		tmp = tmp->next;
	}
	while (phead2->next)
	{
		printf("%d ", phead2->next->a);
		phead2 = phead2->next;
	}
    
	return 0;
}