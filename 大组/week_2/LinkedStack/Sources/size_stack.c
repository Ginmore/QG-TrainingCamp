# include "head.h"

void size_stack(LinkedStack top)
{
	int n=0;
	LinkedStackNode *p=top->next;
	while(p!=NULL)
	{
		n++;
		p=p->next;
	}
	printf("����ջ�Ĵ�СΪ%d\n",n);	
}