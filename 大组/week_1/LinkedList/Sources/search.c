# include "head.h"

void search(Node *head)
{
	Node *p=head->next;
	int search_data;
	scanf("%d",&search_data);
	while(getchar()!='\n');
	
	while(p)
	{
		if(p->data==search_data)
		{
			printf("������ȷʵ���ڸ�����\n");
			break;
		}	
		else	p=p->next;
	}
	if(p==NULL)	printf("�����в����ڸ�����\n");
}