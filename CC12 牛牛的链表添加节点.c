#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

struct list
{
	int a;
	struct list* next;
};

void buyNode(struct list** prev,int m)
{
	struct list* head = (struct list*)malloc(sizeof(struct list));
	(*prev)->next = head;
	head->next = NULL;
	head->a = m;
}

int main()
{
	int n = 0;
	int i = 0;
	scanf("%d%d", &n, &i);
	struct list* phead = (struct list*)malloc(sizeof(struct list));
	struct list* cur = phead;
	struct list* tmp = cur;
	int a = i;
	int b = n;
	while (n)
	{
		int m = 0;
		scanf("%d", &m);
		buyNode(&cur,m);
		cur = cur->next;
		n--;
	}
	while (a)
	{
		tmp = tmp->next;
		a--;
	}
	struct list* new = (struct list*)malloc(sizeof(struct list));
	struct list* next = tmp->next;
	if (next == NULL)
	{
		tmp->next = new;
		new->a = i;
		new->next = NULL;
	}
	else
	{
		tmp->next = new;
		new->next = next;
		new->a = i;
	}
	while (b+1)
	{
		printf("%d ", phead->next ->a);
		phead = phead->next;
		b--;
	}
    
	return 0;
}