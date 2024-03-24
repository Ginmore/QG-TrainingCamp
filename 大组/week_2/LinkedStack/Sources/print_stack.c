# include "head.h"

void print_stack(LinkedStack top)
{
	if(top==NULL || top->next==NULL)
	{
		printf("Á´Õ»Îª¿Õ£¡");
		return ;
	}
	LinkedStackNode *t=top->next;
	while(t!=NULL)
	{
		printf("%d ",(t->data));
		t=t->next;
	}
	printf("\n");
}