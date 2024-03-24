# include <stdio.h>
# include <stdlib.h>

typedef int ElemType;

typedef struct LinkedStackNode 
{	
	ElemType data;
	struct LinkedStackNode * next;
} LinkedStackNode, * LinkedStack;                                  

LinkedStack StackInit();
LinkedStack push_stack(LinkedStack top);
void destory_stack(LinkedStack top);
LinkedStack pop_stack(LinkedStack top);
void print_stack(LinkedStack top);
void size_stack(LinkedStack top);
