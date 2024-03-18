# include "head.h"

Node *del(Node *head)
{
	Node *p=NULL,*q=head->next;
	int del_data;
	scanf("%d",&del_data);
	if(q==NULL)	return NULL; //空链表
	for(p=head;p->next!=NULL;p=p->next)  //遍历链表找到数据
	{
		if(p->next->data==del_data)
		{
			p->next=p->next->next;
			break;
		}
	}
	printf("删除数据成功\n");
	return head;
}