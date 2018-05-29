#include "stdio.h"
#include "stdlib.h"
#define n 10
typedef int datatype;
typedef struct node {datatype data; struct node *next;}lklist;
void createlklist(lklist *&head )
{
  int i; lklist *p,*q;
  for (i=1;i<=n;i++)
{
p=(lklist *)malloc(sizeof(lklist)); 
scanf("%d",&(p->data));
p->next=0;
    if (i==1)head=q=p;
else {
q->next=p;
q=p;
}
  }
}
void printlklist(lklist *head)
{
lklist *p=head;
while(p!=0){ 
printf("%d\t",p->data); 
p=p->next;
}
  printf("\n");
}
lklist *locatelklist(lklist *head,datatype x)
{
  lklist *p=head;
  while(p!=0) {
if (p->data==x) return(p); 
else p=p->next;
}
  return(0);
}
void insertlklist(lklist *&head, datatype x, datatype y)
{
  lklist *r,*p,*q;
  r=(lklist *)malloc(sizeof(lklist)); 
r->data=x;
  if (head==0) printf("link is empty"); 
else if (head->data==y){r->next=head; head=r;}
else 
{
for (q=head, p=head->next; p!=0; q=p, p=p->next) 
if (p->data==y) break; 
if (p!=0){q->next=r; r->next=p;} 
else printf("not found node");
}
}
void deletelklist(lklist *&head, datatype x)
{
  lklist *p,*q;
  if(head==0) printf("The link list is empty");
  else if(head->data==x) {p=head; head=head->next; free(p); }
  else 
{
for(q=head, p=head->next;p!=0; q=p, p=p->next) 
if (p->data==x) break;
if(p!=0){q->next=p->next; free(p);}
else printf("x is not in link"); 
}
}
void savefile(lklist *head){
	char fname[20];
	FILE *fp;
	lklist *p;
	printf("请输入文件路径和名称\n");
	 	scanf("%s", fname);
	 	fp = fopen(fname,"r+");
	 	for(p = head; p != NULL; p = p->next)
	 	{
	 		  fwrite(p,1,sizeof(lklist),fp);
	 	}
	 	fclose(fp);
} 
main( )
{
 lklist *head=0,*p;
 createlklist(head); 
printlklist(head);
 p=locatelklist(head,2);  
if (p!=0) printf("found  %d\n",p->data); 
else printf("not found\n");
 insertlklist(head,100,3); 
printlklist(head);
 deletelklist(head,2); 
printlklist(head);
char t;
printf("是否想把数据保存进文件？Y/N");
getchar();
scanf("%c",&t);
if(t == 'Y'){
	savefile(head);
}
}

