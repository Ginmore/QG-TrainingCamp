# include "head.h"

int main()
{	
	int t;      //��ȡ����
	Node *head=NULL;
	while(1)
	{
		system("cls");
		printf("\n1.creat\t\t2.input\t\t3.insert\t4.delete\t5.search\t6.print\n");
		scanf("%d",&t);
		while(getchar()!='\n');  //������������ַ�
		switch(t)
		{
			case 1:
				head=creat();  //���������洢����
				break;
			case 2:
				head=input(head);  //¼������
				break;
			case 3:
				head=insert(head);  //����ָ��������ָ��λ��
				break;
			case 4:
				head=del(head);  //ɾ��ָ������
				break;
			case 5:
				search(head);  //���������Ƿ����ָ������
				break;
			case 6:
				print(head);  //��ʾ��������
				break;
			default:
				printf("Input error.Please input again.\n");
		}
//		system("pause");
	}
	return 0;
}