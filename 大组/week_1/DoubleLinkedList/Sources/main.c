#include "head.h"

int main(/*int argc, char *argv[]*/) 
{
	int t;      //读取操作
	DoubleL_List head=creat();   //创建链表
	while(1)
	{
		system("cls");
		printf("\n1.input   2.insert   3.delete   4.search   5.print   6.exit\n");
		scanf("%d",&t);
		while(getchar()!='\n');  //丢弃后面多余字符
		switch(t)
		{
			case 1:
				head=input(head);  //录入数据
				break;
			case 2:
				head=insert(head);  //插入指定数据至指定位置
				break;
			case 3:
				head=del(head);  //删除指定数据
				break;
			case 4:
				search(head);  //查找链表是否存在指定数据
				break;
			case 5:
				print(head);  //显示所有数据
				break;
			case 6:
				exit(0);  //退出程序
			default:
				printf("Input error.Please input again.\n");
		}
		system("pause");
	}
	return 0;
}