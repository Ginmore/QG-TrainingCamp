# include "head.h"

DoubleL_List creat()
{
	DoubleL_List head = (DoubleL_List) malloc (sizeof(DoubleL_Node));
	head->prior = NULL;
	head->next = NULL;
	head->data = 0;
	
	if(head==NULL)
	{
		printf("��������ʧ�ܣ�");
		return NULL;	
	}
	else printf("��������ɹ���");
	return head;
}