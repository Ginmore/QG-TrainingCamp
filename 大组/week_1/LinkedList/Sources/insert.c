# include "head.h"

Node *insert(Node *head)
{
	Node *p=head;
	Node *t=(Node *)malloc(sizeof(Node));//�洢���������
	int data,location;
	printf("��������Ҫ�������ݵ�λ�ã�1/2�����ڸ���ǰ/��:\n");
	printf("����123 2\n");
	scanf("%d %d",&data,&location);
	printf("��������Ҫ��������ݣ�");
	scanf("%d",&t->data);
	while(getchar()!='\n');//����getchar���������ַ��Ĺ���
	
	if(location==1)   //����������ĳ��ǰ��
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
	else if(location==2)   //����������ĳ����
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
	printf("�������ݳɹ���\n");
	print(head);
	return head;
}