# include "head.h"

DoubleL_List insert(DoubleL_List head)
{
	DoubleL_List p=head;
	DoubleL_List t=(DoubleL_List)malloc(sizeof(DoubleL_Node));//存储插入的数据
	t->prior=NULL;
	int data,location;
	printf("请输入需要插入数据的位置（1/2：插入在该数前/后）:\n");
	printf("例：123 2\n");
	scanf("%d %d",&data,&location);
	printf("请输入需要插入的数据：");
	scanf("%d",&(t->data));
	while(getchar()!='\n');//丢弃getchar后面所有字符的功能
	
	for(p=head->next;p!=NULL;p=p->next)
	{
		if(p->data==data)
		{
			if(location==1)   //数据插入到指针所在位置前
			{
				t->next=p;       
				t->prior=p->prior;  //处理t的前后节点
				p->prior->next=t;   //t与前后分别建立连接
				t->prior=t;
				break;
			}
			else if(location==2)   //数据插入到指针所在位置后
			{
				t->next=p->next;  //t与p建立连接
				p->next->prior=t;
				p->next=t;        //t与p原本前一个节点建立连接
				t->prior=p;
				break;
			}
		}
	}
	
	printf("插入数据成功！\n");
	print(head);
	return head;
}