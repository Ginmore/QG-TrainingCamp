# include "head.h"

LinkedStack pop_stack(LinkedStack top)
{
	LinkedStackNode *pop_node;	
	if(top->next==NULL)	
	{
		printf("该链栈为空！");
		return top;
	}
	pop_node=top->next;
	top->next=pop_node->next;
	free(pop_node);
	printf("出栈成功！");
	return top;
}