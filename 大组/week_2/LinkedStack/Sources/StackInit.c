# include "head.h"

LinkedStack StackInit()
{
	LinkedStack top = (LinkedStackNode *)malloc (sizeof( LinkedStackNode));
	top->data=0;
	top->next = NULL;
	
	if (top == NULL)
	{
		printf("��ʼ��ʧ�ܣ�\n");
		top = NULL;
		return top;
	}
	printf("��ջ��ʼ���ɹ���\n");
	return top;
}