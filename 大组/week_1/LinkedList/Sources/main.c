# include "head.h"

int main()
{	
	int t;      //��ȡ����
	Node *head=NULL;
	while(1)
	{
		system("cls");
		printf("\n1.creat   2.input   3.insert   4.delete   5.search   6.print   7.exit\n");
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
			case 7:
				exit(0);  //�˳�����
			default:
				printf("Input error.Please input again.\n");
		}
		system("pause");
	}
	return 0;
}