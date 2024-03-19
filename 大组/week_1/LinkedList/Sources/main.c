# include "head.h"

int main()
{	
	int t;      //读取操作
	Node *head=NULL;
	while(1)
	{
		system("cls");
		printf("\n1.creat   2.input   3.insert   4.delete   5.search   6.print   7.exit\n");
		scanf("%d",&t);
		while(getchar()!='\n');  //丢弃后面多余字符
		switch(t)
		{
			case 1:
				head=creat();  //创建链表，存储数据
				break;
			case 2:
				head=input(head);  //录入数据
				break;
			case 3:
				head=insert(head);  //插入指定数据至指定位置
				break;
			case 4:
				head=del(head);  //删除指定数据
				break;
			case 5:
				search(head);  //查找链表是否存在指定数据
				break;
			case 6:
				print(head);  //显示所有数据
				break;
			case 7:
				exit(0);  //退出程序
			default:
				printf("Input error.Please input again.\n");
		}
		system("pause");
	}
	return 0;
}