# include "head.h"

Node *insert(Node *head)
{
	Node *p=head;
	Node *t=(Node *)malloc(sizeof(Node));//存储插入的数据
	int data,location;
	printf("请输入需要插入数据的位置（1/2：插在该数前/后）:\n");
	printf("例：123 2\n");
	scanf("%d %d",&data,&location);
	printf("请输入需要插入的数据：");
	scanf("%d",&t->data);
	while(getchar()!='\n');//丢弃getchar后面所有字符的功能
	
	if(location==1)   //插入数据在某数前方
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
	else if(location==2)   //插入数据在某数后方
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
	printf("插入数据成功！\n");
	print(head);
	return head;
}