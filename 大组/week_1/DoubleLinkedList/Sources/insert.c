# include "head.h"

DoubleL_List insert(DoubleL_List head)
{
	DoubleL_List p=head;
	DoubleL_List t=(DoubleL_List)malloc(sizeof(DoubleL_Node));//�洢���������
	t->prior=NULL;
	int data,location;
	printf("��������Ҫ�������ݵ�λ�ã�1/2�������ڸ���ǰ/��:\n");
	printf("����123 2\n");
	scanf("%d %d",&data,&location);
	printf("��������Ҫ��������ݣ�");
	scanf("%d",&(t->data));
	while(getchar()!='\n');//����getchar���������ַ��Ĺ���
	
	for(p=head->next;p!=NULL;p=p->next)
	{
		if(p->data==data)
		{
			if(location==1)   //���ݲ��뵽ָ������λ��ǰ
			{
				t->next=p;       
				t->prior=p->prior;  //����t��ǰ��ڵ�
				p->prior->next=t;   //t��ǰ��ֱ�������
				t->prior=t;
				break;
			}
			else if(location==2)   //���ݲ��뵽ָ������λ�ú�
			{
				t->next=p->next;  //t��p��������
				p->next->prior=t;
				p->next=t;        //t��pԭ��ǰһ���ڵ㽨������
				t->prior=p;
				break;
			}
		}
	}
	
	printf("�������ݳɹ���\n");
	print(head);
	return head;
}