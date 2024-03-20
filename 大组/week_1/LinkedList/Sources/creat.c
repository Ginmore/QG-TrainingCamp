# include "head.h"

Node *creat(void)
{
	Node *head;
	head=(Node *)malloc(sizeof(Node)); 
	head->next=NULL;
	head->data=0;
	head->next=(Node *)malloc(sizeof(Node));
	head->next->next=NULL;
	
	if(head->next==NULL)
		printf("创建链表失败，请重试!\n");
	else
		printf("创建链表成功!\n");
	return head;
}