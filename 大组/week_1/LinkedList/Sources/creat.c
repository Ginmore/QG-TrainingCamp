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
		printf("��������ʧ�ܣ�������!\n");
	else
		printf("��������ɹ�!\n");
	return head;
}