# include "head.h"

Node *del(Node *head)
{
	Node *p=NULL,*q=head->next;
	int del_data;
	scanf("%d",&del_data);
	if(q==NULL)	return NULL; //������
	for(p=head;p->next!=NULL;p=p->next)  //���������ҵ�����
	{
		if(p->next->data==del_data)
		{
			p->next=p->next->next;
			break;
		}
	}
	printf("ɾ�����ݳɹ�\n");
	return head;
}