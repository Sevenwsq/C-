#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void show(){
	printf("********************************\n");
	printf("\t1.输入学生信息\n\t2.添加学生信息\n\t3.删除学生信息\n\t4.遍历学生信息\n\t5.保存信息到文件\n\t0.退出\n********************************\n");
	printf("请输入您选择的操作\n");
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
	printf("您想输入多少个学生的信息？\n");
	scanf("%d", &n);
	printf("请输入学号和姓名：\n"); 
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
	 printf("您是否想要加入一个学生信息？(Y/N)\n");
	 getchar();
	 scanf("%c", &t);
	 if(t == 'Y')
	 {
	 	printf("请输入该学生的学号和姓名：\n");
	 	q = (strstu*)malloc(sizeof(strstu));
		scanf("%d%s",&(q->num), q->name);
		printf("你想要把这个学生的信息插入到哪个学生后面?（输入学号）\n");
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
	 printf("您是否想要删除一个学生信息？(Y/N)\n");
	 getchar();
	 scanf("%c", &t);
	 if(t == 'Y')
	 {
	 	printf("请输入要删除的学生的学号\n");
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
			 if(temp == 1) printf("您输入的学号有误"); 
		 }		 
	 }
	show();
	scanf("%d", &run);
	 }
	 if(run == 4)
	 {
	 printf("您是否想打印学生信息?(Y/N)\n");
	 getchar();
	 scanf("%c", &t);
	 if(t == 'Y')
	 {
	 	printf("目前已有的学生信息如下:\n"); 
	 	for(p = head; p != NULL; p = p->next)
	 	{
	 		printf("\t学号:%d  姓名:%s\n",p->num, p->name);
	 	}
	 }
	 else
	 exit(0);
	 show();
	scanf("%d", &run);
	 }
	 if(run == 5)
	 {
	 	printf("请输入文件路径和名称\n");
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
