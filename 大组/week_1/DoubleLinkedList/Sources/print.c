# include "head.h"

void print(DoubleL_List head)
{
	DoubleL_List p=head;
	if(p==NULL)
	{
		printf("���������ݣ�\n");     //�ļ�Ϊ�յ���ʾ 
		return;
	}
	while(p!=NULL)  //�������������������
	{
		if(p==head)
		{
			p=p->next;
			continue;
		}
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n\n");
}