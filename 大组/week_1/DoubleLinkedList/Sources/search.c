# include "head.h"

void search(DoubleL_List head)
{
	DoubleL_List p=head->next;
	p->prior=head;
	int search_data;
	printf("����ϣ�����ҵ����ݣ�");
	scanf("%d",&search_data);
	while(getchar()!='\n');

	while(p)
	{
		if(p->data==search_data)
		{
			printf("�����д��ڸ�����\n");
			break;
		}	
		else	p=p->next;
	}
	if(p==NULL)	printf("�����в����ڸ�����\n");	
}

