#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int a;
	struct list* next;
};

void buyNode(int n, struct list** prev)
{
	struct list* head = (struct list*)malloc(sizeof(struct list));
	head->a = n;
	head->next = NULL;
	(*prev)->next = head;
}

void FindNode(int data, struct list** prev)
{
	struct list* tmp = *prev;
	struct list* next = tmp->next;
	while (next)
	{
		if (next->a == data)
		{
			tmp->next= next->next ;
			tmp = tmp->next;
			if (tmp == NULL)
			{
				break;
			}
			next = tmp->next;
		}
		else
		{
			tmp = next;
			if (tmp == NULL)
			{
				break;
			}
			next = tmp->next;
		}
	}
}

int main()
{
	int n = 0,data = 0,m = 0;
	scanf("%d%d", &n, &data);
	struct list* phead = (struct list*)malloc(sizeof(struct list));
	struct list* cur = phead;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		buyNode(m, &cur);
		cur = cur->next;
	}
	FindNode(data, &phead);
	while(phead->next)
	{
		printf("%d ", phead->next->a);
		phead = phead->next;
	}

	return 0;
}