# include "head.h"

Node *del(Node *head)
{
	Node *p=NULL,*q=head->next;
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
			break;
		}
	}
	printf("\nɾ�����ݳɹ�\n");
	return head;
}