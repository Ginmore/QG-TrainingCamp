# include "head.h"

LinkedStack pop_stack(LinkedStack top)
{
	LinkedStackNode *pop_node;	
	if(top->next==NULL)	
	{
		printf("����ջΪ�գ�");
		return top;
	}
	pop_node=top->next;
	top->next=pop_node->next;
	free(pop_node);
	printf("��ջ�ɹ���");
	return top;
}