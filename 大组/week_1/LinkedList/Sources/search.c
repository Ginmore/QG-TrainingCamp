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
			printf("链表中确实存在该数据\n");
			break;
		}	
		else	p=p->next;
	}
	if(p==NULL)	printf("链表中不存在该数据\n");
}