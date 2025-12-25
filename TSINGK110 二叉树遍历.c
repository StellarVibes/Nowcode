#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<stdio.h>

typedef char BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

BTNode* BuyNode_BIN(BTDataType data);
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树
BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi);
void _BinaryTreeDestory(BTNode* root);
// 二叉树销毁
void BinaryTreeDestory(BTNode** root);
// 二叉树节点个数
int BinaryTreeSize(BTNode* root);
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root);
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k);
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root);
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root);
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root);
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root);
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root);
// 链式结构：表示队列 
typedef BTNode* QDataType;
typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;

// 队列的结构 
typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;
QNode* BuyNode(QDataType x);

// 初始化队列 
void QueueInit(Queue* q);
// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
// 队头出队列 
void QueuePop(Queue* q);
// 获取队列头部元素 
QNode* QueueFront(Queue* q);

// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
// 获取队列中有效元素个数 
int QueueSize(Queue* q);
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q);
// 销毁队列 
void QueueDestroy(Queue* q);
/*typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;*/
BTNode* BuyNode_BIN(BTDataType data)
{
	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	tmp->_data = data;
	tmp->_left = tmp->_right = NULL;
	return tmp;
}
// 通过前序遍历的数组"ABD##E#H##CF##G##"构建二叉树

BTNode* BinaryTreeCreate(BTDataType* a, int n, int* pi)
{
	if (a[*pi] == '#')
	{
		(*pi)++;
		return NULL;
	}
	BTNode* root = BuyNode_BIN(a[*pi]);
	(*pi)++;
	root->_left = BinaryTreeCreate(a, n, pi);
	root->_right = BinaryTreeCreate(a, n, pi);
	return root;
}
void _BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
	{
		return;
	}
	_BinaryTreeDestory(root->_left);
	_BinaryTreeDestory(root->_right);
	free(root);
}
// 二叉树销毁
void BinaryTreeDestory(BTNode** root)
{
	if (root == NULL)
	{
		return;
	}
	_BinaryTreeDestory(*root);
	root = NULL;
}
// 二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right) + 1;
}
// 二叉树叶子节点个数
int BinaryTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->_left || root->_right)
	{
		return BinaryTreeLeafSize(root->_left) + BinaryTreeLeafSize(root->_right);
	}
	else
	{
		return 1;
	}

}
// 二叉树第k层节点个数
int BinaryTreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	else
	{
		return BinaryTreeLevelKSize(root->_left, k - 1) + BinaryTreeLevelKSize(root->_right, k - 1);
	}
}
// 二叉树查找值为x的节点
BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->_data == x)
	{
		return root;
	}
	BTNode* ret = BinaryTreeFind(root->_left, x);
	if (ret != NULL)
	{
		return ret;
	}	
	return BinaryTreeFind(root->_right, x);
}
// 二叉树前序遍历 
void BinaryTreePrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	printf("%c ", root->_data);
	BinaryTreePrevOrder(root->_left);
	BinaryTreePrevOrder(root->_right);
}
// 二叉树中序遍历
void BinaryTreeInOrder(BTNode* root)
{
	if (root == NULL)
	{
		//printf("N ");
		return;
	}
	BinaryTreeInOrder(root->_left);
	printf("%c ", root->_data);
	BinaryTreeInOrder(root->_right);
}
// 二叉树后序遍历
void BinaryTreePostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}
	BinaryTreePostOrder(root->_left);
	BinaryTreePostOrder(root->_right);
	printf("%c ", root->_data);
}
// 层序遍历
void BinaryTreeLevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q, root);
	while (!QueueEmpty(&q))
	{
		QNode* tmp = QueueFront(&q);
		if (tmp->_data == NULL)
		{
			break;
		}
		printf("%c ", tmp->_data->_data);
		QueuePush(&q, tmp->_data->_left);
		QueuePush(&q, tmp->_data->_right);
		QueuePop(&q);
	}
	while (!QueueEmpty(&q))
	{
		QNode* cur = QueueFront(&q);
		if (cur->_data != NULL)
		{
			printf("%c ", cur->_data->_data);
		}
		else
		{
			printf("N ");
		}
		QueuePop(&q);
	}
}
// 判断二叉树是否是完全二叉树
int BinaryTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	QueuePush(&q,root);
	while (!QueueEmpty(&q))
	{
		QNode* tmp = QueueFront(&q);
		if (tmp->_data == NULL)
		{
			break;
		}
		printf("%c ", tmp->_data->_data);
		QueuePush(&q, tmp->_data->_left);
		QueuePush(&q, tmp->_data->_right);
		QueuePop(&q);
	}
	while (!QueueEmpty(&q))
	{
		QNode* cur = QueueFront(&q);
		if (cur->_data != NULL)
		{
			return 0;
		}
		QueuePop(&q);
	}
	return 1;
}
/*typedef struct QListNode
{
	struct QListNode* _next;
	QDataType _data;
}QNode;*/
/* typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;
*/
QNode* BuyNode(QDataType x)
{
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	tmp->_data = x;
	tmp->_next = NULL;
	return tmp;
}
// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_front = NULL;
}
// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	assert(q);
	QNode* tmp = BuyNode(data);
	if (q->_front == NULL)
	{
		q->_front = q->_rear = tmp;
	}
	else
	{
		q->_rear->_next = tmp;
		q->_rear = tmp;
	}
}
// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q);
	assert(q->_front);
	QNode* tmp = q->_front;
	q->_front = q->_front->_next;
	free(tmp);
}
// 获取队列头部元素 
QNode* QueueFront(Queue* q)
{
	assert(q);
	return q->_front;
}
// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->_rear);
	return q->_rear->_data;
}
// 获取队列中有效元素个数 
int QueueSize(Queue* q)
{
	assert(q);
	assert(q->_front);
	QNode* tmp = q->_front;
	int count = 1;
	while (tmp != q->_rear)
	{
		count++;
		tmp = tmp->_next;
	}
	return count;
}
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q);
	assert(q->_rear);
	return q->_front== NULL?-1:0;
}
// 销毁队列 
void QueueDestroy(Queue* q)
{
	assert(q);
	assert(q->_front);
	QNode* tmp = q->_front;
	while (tmp != q->_rear)
	{
		QNode* cur = tmp;
		tmp = tmp->_next;
		free(cur);
	}
	q->_front = q->_front = NULL;
	q = NULL;
}

int main()
{
	BTDataType a[100] = {'0'};
    scanf("%s",a);
	int i = 0;
	BTNode* tmp = BinaryTreeCreate(a, sizeof(a)/sizeof(a[0]), &i);
	BinaryTreeInOrder(tmp);
    
	return 0;
}