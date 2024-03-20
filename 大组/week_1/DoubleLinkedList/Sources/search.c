# include "head.h"

void search(DoubleL_List head)
{
	DoubleL_List p=head->next;
	p->prior=head;
	int search_data;
	printf("输入希望查找的数据：");
	scanf("%d",&search_data);
	while(getchar()!='\n');

	while(p)
	{
		if(p->data==search_data)
		{
			printf("链表中存在该数据\n");
			break;
		}	
		else	p=p->next;
	}
	if(p==NULL)	printf("链表中不存在该数据\n");	
}

