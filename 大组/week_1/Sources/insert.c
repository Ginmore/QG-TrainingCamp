# include "head.h"

Node *insert(Node *head)
{
	Node *p=head;
	Node *t=NULL;//存储插入的数据
	int data,location;
	printf("请输入需要插入数据的位置（1/2：插在该数前/后）:\n");
	printf("例：123 2\n");
	scanf("%d %d",&data,&location);
	printf("请输入需要插入的数据：");
	scanf("%d",&t->data);
	
	if(location==1)
	{
		for(;p->next!=NULL;p=p->next)
		{
			if(p->next->data==data)
			{
				t->next=p->next;
				p->next=t;
				break;
			}
		}
	}
	else if(location==2)
	{
		for(p=head->next;p!=NULL;p=p->next)
		{
			if(p->data==data)
			{
				t->next=p->next;
				p->next=t;
				break;
			}
		}
	}
	return head;
}