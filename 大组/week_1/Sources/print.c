# include "head.h"

void print(Node* head)
{
	Node *p=head->next;
	if(p==NULL)
	{
		printf("不存在数据！");     //文件为空的提示 
		return;
	}
	while(p!=NULL)  //遍历链表输出所有数据
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n\n");
}