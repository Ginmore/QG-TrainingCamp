# include "head.h"

LinkedStack StackInit()
{
	LinkedStack top = (LinkedStackNode *)malloc (sizeof( LinkedStackNode));
	top->data=0;
	top->next = NULL;
	
	if (top == NULL)
	{
		printf("初始化失败！\n");
		top = NULL;
		return top;
	}
	printf("链栈初始化成功！\n");
	return top;
}