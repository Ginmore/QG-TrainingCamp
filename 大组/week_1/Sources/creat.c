# include "head.h"

Node *creat(void)
{
	Node *head;
	head=(Node *)malloc(sizeof(Node)); 
	head->data=0;
	head->next=(Node *)malloc(sizeof(Node));
	
	if(head->next==NULL)
		printf("��������ʧ�ܣ�������!\n");
	else
		printf("��������ɹ�!\n");
	return head;
}