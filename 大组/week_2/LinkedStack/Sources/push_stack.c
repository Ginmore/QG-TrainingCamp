# include "head.h"

LinkedStack push_stack(LinkedStack top)
{
	ElemType x=0;
	LinkedStackNode *newnode;
	while(1)
	{
		newnode=(LinkedStackNode * )malloc(sizeof(LinkedStackNode));
		newnode->data=0;
		newnode->next=NULL;
		if(newnode==NULL)	perror("malloc fail");
		else
		{
			printf("����������ջ��Ԫ��ֵ������1000ֹͣ���룩��");
			while(scanf("%d",&x) == 0)
			{
				printf("����������������룺");
				while(getchar()!='\n');
			}
			if(x==1000)
			{
				newnode=NULL;
				break;
			}
			newnode->data=x;//�����½���������
			newnode->next=top->next;//�����½���ָ���
			top->next=newnode;//����ͷ���ָ���ָ���µ�ջ��Ԫ��
		}
	}
	printf("��ջ�ɹ���");		
	return top;
}