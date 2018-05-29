#include<stdio.h>
#define MAXS 15 
int i;
void StringCount(char s[]);
void ReadString(char s[]);
int main(void)
{
    char s[MAXS];
    ReadString(s);
    StringCount(s);
    return 0;
}
void ReadString(char s[]){
    int k=0;
    while((s[k]=getchar())!=EOF){
    k++;    
    }
    s[k]='\0';
}
void StringCount(char s[]){
    char b[15];
    int k,letter,blank,digit,other;
    letter=blank=digit=other=0;
    i=0;
    do{b[i]=s[i];
        i++;
    }while(s[i]!='\0');
    for(k=0;k<i-1;k++){
        if((b[k]<='z'&&b[k]>='a')||(b[k]>='A'&&b[k]<='Z'))
        letter++;
        else if(b[k]==' '||b[k]=='\n')
        blank++;
        else if(b[k]<='9'&&b[k]>='0')
        digit++;
        else
        other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
}

