# include "head.h"

Node *input(Node *head)
{
	Node *p1,*p2;
	p1=head;
	p2=(Node *)malloc(sizeof(Node));
	p2->next=NULL;
	p1->next=p2;
	int method;
	printf("请选择输入数据方式：\n1.手动输入\t2.文件输入\n");
	scanf("%d",&method);
	while(getchar()!='\n');//丢弃getchar后面所有字符的功能
	
	if (method==1)    //手动输入 
	{
		printf("（输入00时停止输入）\n");
		while(1)       //循环录入，一次性录入多个数据
		{
			scanf("%d",&p2->data);  
			if(p2->data==00)    //输入00时停止输入
			{
				while(getchar()!='\n');//丢弃getchar后面所有字符的功能
				p2=NULL;
				break;
			}
			p2=(Node *)malloc(sizeof(Node));   //开辟新空间 
			p2->next=NULL;
			if(head->next==NULL)	head->next=p2;
			else p1->next=p2;           //插入到链表末尾 
			p1=p2;
			p1->next=NULL;
		}
	} 
	
	else if(method==2)
	{
		FILE *fp;    //定义文件指针 
		char file[20];
		printf("请输入文件名：（请输入完整文件名并包括拓展名）（测试用例：文件输入测试.txt）\n");
		scanf("%s",file);      //读取文件名 
		while(getchar()!='\n');//丢弃getchar后面所有字符的功能
	
		while((fp=fopen(file,"rb"))==NULL)   //打开用户输入的文件 
		{
			perror("open file failed:");     //输出文件打开失败原因 
			printf("可能是文件不存在，请查看文件是否存在！\n");
			printf("温馨提示：请查看是否输入的文件名有误，或是否缺少拓展名\n");
			printf("请重新输入（输入0放弃本次文件录入，回到主菜单）\n");
			scanf("%s",file);      //读取文件名 
			while(getchar()!='\n');//丢弃getchar后面所有字符的功能
			if(strcmp(file,"0")==0)	return head; 
		}

		if (strcmp(strrchr(file, '.'), ".txt") == 0) 
		{
			while(fscanf(fp,"%d",&p2->data)!=EOF)
			{
				p1 = p2;
				p1->next=NULL;
		        p2 = (Node *)malloc(sizeof(Node)); //开辟新空间 
		        if (head->next == NULL) head->next = p2;
		        else p1->next = p2;     //插入到链表末尾
		    }
		    p1->next=NULL;
		    free(p2);
		    fclose(fp);   //关闭文件 
		}
		else
		{
			printf("文件没有数据，请先在文件中输入数据\n");
			printf("提示：请留意是否选择错误文件\n");
		}
	}
	
	printf("数据录入成功！\n");
	return head;
}