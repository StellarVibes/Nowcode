#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int date;
	struct list* next;
};

void BuyNode(int i, struct list** prve)
{
	struct list* head = (struct list*)malloc(sizeof(struct list));
	if (head)
	{

		head->date = i;
		head->next = NULL;
		(*prve)->next = head;
	}
}

int main()
{
	int n = 0;
    int a = 0;
	scanf("%d", &n);
	struct list* phead = (struct list*)malloc(sizeof(struct list));
	if (phead==NULL)
	{
		return 1;
	}
	struct list* head = phead;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		BuyNode(a,&head);
		head = head->next;
	}
	while (phead->next)
	{
		printf("%d ", phead->next->date);
		phead = phead->next;
	}

	return 0;
}