# include "head.h"

int main() 
{
	ElemType x;
	LinkedStack top;
	
	while(1)
	{
		printf("1.init_stack   2.push_stack   3.pop_stack   4.destory_stack   4.size   5.print\n");	
		scanf("%d",&x);
		while(getchar()!='\n');
		switch(x)
		{
			case 1:
				top=StackInit();
				break;
			case 2:
				top=push_stack(top);
				break;	
			case 3:
				top=pop_stack(top);
				break;
			case 4:	
				destory_stack(top);
				break;
			case 5:
				size_stack(top);
				break;
			case 6:
				print_stack(top);
				break;
			default:
				printf("输入错误，请重新输入：");
				continue;
		}
		system("pause");
		system("cls");
	}
		
	return 0;
}