# include "head.h"

void print(Node* head)
{
	Node *p=head->next;
	if(p==NULL)
	{
		printf("���������ݣ�");     //�ļ�Ϊ�յ���ʾ 
		return;
	}
	while(p!=NULL)  //�������������������
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n\n");
}