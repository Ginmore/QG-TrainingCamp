# include "head.h"

Node *creat(void)
{
	Node *head;
	head=(Node *)malloc(sizeof(Node)); 
	head->data=0;
	head->next=(Node *)malloc(sizeof(Node));
	
	if(head->next==NULL)
		printf("创建链表失败，请重试!\n");
	else
		printf("创建链表成功!\n");
	return head;
}