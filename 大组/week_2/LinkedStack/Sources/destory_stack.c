# include "head.h"

void destory_stack(LinkedStack top)
{
	LinkedStackNode *t=top->next;
	
	while(t!=NULL)
	{
		LinkedStackNode *p=t->next;
		free(t);
		t=p;
	}
	top=NULL;
	printf("销毁链栈完毕！\n");
}