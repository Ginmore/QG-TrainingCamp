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
			printf("请输入新入栈的元素值（输入1000停止输入）：");
			while(scanf("%d",&x) == 0)
			{
				printf("输入错误，请重新输入：");
				while(getchar()!='\n');
			}
			if(x==1000)
			{
				newnode=NULL;
				break;
			}
			newnode->data=x;//设置新结点的数据域
			newnode->next=top->next;//设置新结点的指针城
			top->next=newnode;//设置头结点指针城指向新的栈顶元素
		}
	}
	printf("入栈成功！");		
	return top;
}