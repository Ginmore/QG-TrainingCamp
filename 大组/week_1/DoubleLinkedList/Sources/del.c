# include "head.h"

DoubleL_List del(DoubleL_List head)
{
	DoubleL_Node *p=NULL,*q=head->next;
	p->prior=NULL;
	q->prior=head;
	int del_data;
	printf("��������Ҫɾ�������ݣ�");
	scanf("%d",&del_data);
	while(getchar()!='\n');
	if(q==NULL)	return NULL; //������
	for(p=head;p->next!=NULL;p=p->next)  //���������ҵ�����
	{
		if(p->next->data==del_data)
		{
			p->next=p->next->next;
			(p->next->prior)=p;
			break;
		}
	}
	printf("\nɾ�����ݳɹ�\n");
	return head;
}