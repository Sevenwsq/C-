#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void show(){
	printf("********************************\n");
	printf("\t1.����ѧ����Ϣ\n\t2.���ѧ����Ϣ\n\t3.ɾ��ѧ����Ϣ\n\t4.����ѧ����Ϣ\n\t5.������Ϣ���ļ�\n\t0.�˳�\n********************************\n");
	printf("��������ѡ��Ĳ���\n");
}
typedef struct student{
	int num;
	char name[20];
	struct student *next;
} strstu;
int main(void)
{
	FILE *fp;
	char fname[30];
	strstu *head, *tail, *p, *q;
	strstu *ptr1, *ptr2;
	head = tail = NULL;
	int i, n, num;
	char t;
	int run, temp=1;
	show(); 
	scanf("%d", &run);
	do{
	if(run == 0) return 0;
	if(run == 1)
	{
	printf("����������ٸ�ѧ������Ϣ��\n");
	scanf("%d", &n);
	printf("������ѧ�ź�������\n"); 
	for(i = 0; i < n; i++)
	{
		p = (strstu*)malloc(sizeof(strstu));
		p->next = NULL;
		scanf("%d%s",&(p->num), p->name);
		/*if(i == 0)
		{
			p->next = head;
			head = p;
		}
		else
		{
			p->next = head;
			head= p;
		}*/
		if(head == NULL)
		{
			head = p;
			tail = p;
		}
		else
		{
			tail->next = p;
			tail = p;
		}
	 }
	show();
	scanf("%d", &run);
	 }
	 if(run == 2)
	 {
	 printf("���Ƿ���Ҫ����һ��ѧ����Ϣ��(Y/N)\n");
	 getchar();
	 scanf("%c", &t);
	 if(t == 'Y')
	 {
	 	printf("�������ѧ����ѧ�ź�������\n");
	 	q = (strstu*)malloc(sizeof(strstu));
		scanf("%d%s",&(q->num), q->name);
		printf("����Ҫ�����ѧ������Ϣ���뵽�ĸ�ѧ������?������ѧ�ţ�\n");
		scanf("%d", &num);
		if(head->num == num)
		{
			q->next = head->next;
			head->next = q;
		}
		else
		{
			p = head->next;;
			while(p!=NULL)
			{
				if(p->num == num)
				{
					q->next = p->next;
					p->next = q;
					break;
				}
				else
				{
					p = p->next;
				}
			 } 
		}
	 }
	show();
	scanf("%d", &run);
	 }
	 if(run == 3)
	 {
	 printf("���Ƿ���Ҫɾ��һ��ѧ����Ϣ��(Y/N)\n");
	 getchar();
	 scanf("%c", &t);
	 if(t == 'Y')
	 {
	 	printf("������Ҫɾ����ѧ����ѧ��\n");
		scanf("%d", &num);
		if(head->num == num)
		{
			p = head;
			head = head->next;
			free(p); 
		 } 
		else
		{
			q = head;
		 	p = head->next;
		 	while(p != NULL)
		 	{
		 		if(p->num == num)
		 		{
		 			q->next = p->next;
		 			free(p);
		 			temp = 0;
		 			break;
				 }
				 else
				 {
				 	q = p;
				 	p = p->next;
				 }
			 }
			 if(temp == 1) printf("�������ѧ������"); 
		 }		 
	 }
	show();
	scanf("%d", &run);
	 }
	 if(run == 4)
	 {
	 printf("���Ƿ����ӡѧ����Ϣ?(Y/N)\n");
	 getchar();
	 scanf("%c", &t);
	 if(t == 'Y')
	 {
	 	printf("Ŀǰ���е�ѧ����Ϣ����:\n"); 
	 	for(p = head; p != NULL; p = p->next)
	 	{
	 		printf("\tѧ��:%d  ����:%s\n",p->num, p->name);
	 	}
	 }
	 else
	 exit(0);
	 show();
	scanf("%d", &run);
	 }
	 if(run == 5)
	 {
	 	printf("�������ļ�·��������\n");
	 	scanf("%s", fname);
	 	fp = fopen(fname,"r+");
	 	for(p = head; p != NULL; p = p->next)
	 	{
	 		  fwrite(p,1,sizeof(strstu),fp);
	 	}
	 	fclose(fp);
	 show(); 
	scanf("%d", &run);
	  } 
	 }while(run!=0);
 } 
