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
	int n = 0,a = 0,m = 0,sum = 0;
	scanf("%d", &n);
	struct list* phead = (struct list*)malloc(sizeof(struct list));
	struct list* ret = phead;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		Buynode(m, &ret);
		ret = ret->next;
	}
	while (phead->next)
	{
		sum += phead->next->a;
		phead = phead->next;
	}
	printf("%d", sum);
    
	return 0;
}