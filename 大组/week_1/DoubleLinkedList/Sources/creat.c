# include "head.h"

DoubleL_List creat()
{
	DoubleL_List head = (DoubleL_List) malloc (sizeof(DoubleL_Node));
	head->prior = NULL;
	head->next = NULL;
	head->data = 0;
	
	if(head==NULL)
	{
		printf("创建链表失败！");
		return NULL;	
	}
	else printf("创建链表成功！");
	return head;
}