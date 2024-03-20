# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct DoubleLinkedList_Node
{
	struct DoubleLinkedList_Node *prior;
	int data;
	struct DoubleLinkedList_Node *next;	
}DoubleL_Node;
typedef DoubleL_Node*  DoubleL_List;

DoubleL_List creat();
DoubleL_List input(DoubleL_List head);
DoubleL_List insert(DoubleL_List head);
DoubleL_List del(DoubleL_List head);
void print(DoubleL_List head);
void search(DoubleL_List head);
