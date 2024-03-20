# include "head.h"

void print(DoubleL_List head)
{
	DoubleL_List p=head;
	if(p==NULL)
	{
		printf("不存在数据！\n");     //文件为空的提示 
		return;
	}
	while(p!=NULL)  //遍历链表输出所有数据
	{
		if(p==head)
		{
			p=p->next;
			continue;
		}
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n\n");
}