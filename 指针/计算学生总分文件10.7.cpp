#include<stdio.h>
#include<stdlib.h>
#define N 1000
struct student 
{
	char id[10];
	char name[9];
	float score[3];
	float total;
}; 
typedef struct student stuStru;
void sum (stuStru *s , int n)
{
	int i;
	stuStru *p = s;
	while(p < s+n)
	{
		p -> total = 0;
		for(i = 0; i < 3; i++)
			p -> total += p -> score[i];
			p ++ ;
	}
 } 
int readData(stuStru s[] , const char *filename)
{
	FILE *fp;
	fp = fopen(filename,"r");
	if(fp != NULL)
	{
		int n = 0, i;
		while(!feof(fp))
		{
		fscanf(fp, "%s", s[n].id);
		fscanf(fp, "%s", s[n].name);
		for(i = 0; i < 3; i++)
		{
			fscanf(fp, "%f", &s[n].score[i]);
			n++;
		}
		fclose(fp);
		return n;
		}	
	}
	else return 0;
}
void saveData(stuStru *s , const char *filename , int n)
{
	FILE *fp;
	int i , j;
	fp = fopen(filename,"w");
	if(fp != NULL)
	{
		for(i = 0; i < n; i++,s++)
		{
			fprintf(fp,"%-12s",s->id);
			fprintf(fp,"%-12s",s->name);
			for(j = 0; j < 3; j++)
				fprintf(fp, "%-8.2f",s->score[j]);
				fprintf(fp, "%-8.2f",s->total);
		}
		fclose(fp);
	}
	else 
		printf("Œƒº˛±£¥Ê ß∞‹£°\n"); 
}

int main(void)
{
	stuStru s[N];
	int n;
	n = readData(s, "G:/C”Ô—‘/÷∏’Î/TextDemo.txt");
	sum(s,n);
	saveData(s,"G:/C”Ô—‘/÷∏’Î/File.txt",n);
	return 0;
}
