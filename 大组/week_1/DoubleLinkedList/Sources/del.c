# include "head.h"

DoubleL_List del(DoubleL_List head)
{
	DoubleL_Node *p=NULL,*q=head->next;
	p->prior=NULL;
	q->prior=head;
	int del_data;
	printf("请输入需要删除的数据：");
	scanf("%d",&del_data);
	while(getchar()!='\n');
	if(q==NULL)	return NULL; //空链表
	for(p=head;p->next!=NULL;p=p->next)  //遍历链表找到数据
	{
		if(p->next->data==del_data)
		{
			p->next=p->next->next;
			(p->next->prior)=p;
			break;
		}
	}
	printf("\n删除数据成功\n");
	return head;
}