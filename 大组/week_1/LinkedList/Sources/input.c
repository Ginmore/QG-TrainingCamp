# include "head.h"

Node *input(Node *head)
{
	Node *p1,*p2;
	p1=head;
	p2=(Node *)malloc(sizeof(Node));
	p2->next=NULL;
	p1->next=p2;
	int method;
	printf("��ѡ���������ݷ�ʽ��\n1.�ֶ�����\t2.�ļ�����\n");
	scanf("%d",&method);
	while(getchar()!='\n');//����getchar���������ַ��Ĺ���
	
	if (method==1)    //�ֶ����� 
	{
		printf("������00ʱֹͣ���룩\n");
		while(1)       //ѭ��¼�룬һ����¼��������
		{
			scanf("%d",&p2->data);  
			if(p2->data==00)    //����00ʱֹͣ����
			{
				while(getchar()!='\n');//����getchar���������ַ��Ĺ���
				p2=NULL;
				break;
			}
			p2=(Node *)malloc(sizeof(Node));   //�����¿ռ� 
			p2->next=NULL;
			if(head->next==NULL)	head->next=p2;
			else p1->next=p2;           //���뵽����ĩβ 
			p1=p2;
			p1->next=NULL;
		}
	} 
	
	else if(method==2)
	{
		FILE *fp;    //�����ļ�ָ�� 
		char file[20];
		printf("�������ļ������������������ļ�����������չ�����������������ļ��������.txt��\n");
		scanf("%s",file);      //��ȡ�ļ��� 
		while(getchar()!='\n');//����getchar���������ַ��Ĺ���
	
		while((fp=fopen(file,"rb"))==NULL)   //���û�������ļ� 
		{
			perror("open file failed:");     //����ļ���ʧ��ԭ�� 
			printf("�������ļ������ڣ���鿴�ļ��Ƿ���ڣ�\n");
			printf("��ܰ��ʾ����鿴�Ƿ�������ļ������󣬻��Ƿ�ȱ����չ��\n");
			printf("���������루����0���������ļ�¼�룬�ص����˵���\n");
			scanf("%s",file);      //��ȡ�ļ��� 
			while(getchar()!='\n');//����getchar���������ַ��Ĺ���
			if(strcmp(file,"0")==0)	return head; 
		}

		if (strcmp(strrchr(file, '.'), ".txt") == 0) 
		{
			while(fscanf(fp,"%d",&p2->data)!=EOF)
			{
				p1 = p2;
				p1->next=NULL;
		        p2 = (Node *)malloc(sizeof(Node)); //�����¿ռ� 
		        if (head->next == NULL) head->next = p2;
		        else p1->next = p2;     //���뵽����ĩβ
		    }
		    p1->next=NULL;
		    free(p2);
		    fclose(fp);   //�ر��ļ� 
		}
		else
		{
			printf("�ļ�û�����ݣ��������ļ�����������\n");
			printf("��ʾ���������Ƿ�ѡ������ļ�\n");
		}
	}
	
	printf("����¼��ɹ���\n");
	return head;
}