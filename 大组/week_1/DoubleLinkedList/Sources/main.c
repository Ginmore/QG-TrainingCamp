#include "head.h"

int main(/*int argc, char *argv[]*/) 
{
	int t;      //��ȡ����
	DoubleL_List head=creat();   //��������
	while(1)
	{
		system("cls");
		printf("\n1.input   2.insert   3.delete   4.search   5.print   6.exit\n");
		scanf("%d",&t);
		while(getchar()!='\n');  //������������ַ�
		switch(t)
		{
			case 1:
				head=input(head);  //¼������
				break;
			case 2:
				head=insert(head);  //����ָ��������ָ��λ��
				break;
			case 3:
				head=del(head);  //ɾ��ָ������
				break;
			case 4:
				search(head);  //���������Ƿ����ָ������
				break;
			case 5:
				print(head);  //��ʾ��������
				break;
			case 6:
				exit(0);  //�˳�����
			default:
				printf("Input error.Please input again.\n");
		}
		system("pause");
	}
	return 0;
}