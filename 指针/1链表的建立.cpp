#include <stdio.h>
#include <stdlib.h>


struct person{
	char name[30];
	char sex;
	int number;
	//struct person *next;
}; 

int main(void)
{
	struct person stu[5];
	int n,i;
	char temp;
	printf("\n��������ѧ������Ϣ��(Y/N):\n");
	scanf("%c",&temp);
	if(temp!='N')
	{
		printf("\n����������ٸ�ѧ������Ϣ��\n");
		scanf("%d",&n);
		getchar();
		for(i=0;i<n;i++)
		{
		//p = (struct person*)malloc(sizeof(struct person));
		printf("\n�������������Ա�ѧ��:\n");
		scanf("%s %c %d",&stu[i].name,&stu[i].sex,&stu[i].number);	
		}
}
else 
        exit(0); 
for(i=0;i<n;i++)
	//printf("%s,%c,%d",stu[i].name,&stu[i].sex,&stu[i].number);
	printf("%s,%c,%d",&stu[i].name,stu[i].sex,stu[i].number);
return 0;
}

