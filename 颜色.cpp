#include <stdio.h>  
#include <windows.h>  
void color(short x) //�Զ��庯���ݲ����ı���ɫ   
{  
    if(x>=0 && x<=15)//������0-15�ķ�Χ��ɫ  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);    //ֻ��һ���������ı�������ɫ   
    else//Ĭ�ϵ���ɫ��ɫ  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);  
}  
int main()  
{         
    printf("�˴�Ϊû������ɫ����֮ǰĬ�ϵ���ɫ\n");  
    //�����Զ���color(x)���� �ı����ɫ  
    color(0);   printf("��ɫ\n");  
    color(1);   printf("��ɫ\n");  
    color(2);   printf("��ɫ\n");   
    color(3);   printf("����ɫ\n");  
    color(4);   printf("��ɫ\n");  
    color(5);   printf("��ɫ\n");  
    color(6);   printf("��ɫ\n");   
    color(7);   printf("��ɫ\n");  
    color(8);   printf("��ɫ\n");  
    color(9);   printf("����ɫ\n");  
    color(10);  printf("����ɫ\n");  
    color(11);  printf("��ǳ��ɫ\n");   
    color(12);  printf("����ɫ\n");  
    color(13);  printf("����ɫ\n");  
    color(14);  printf("����ɫ\n");  
    color(15);  printf("����ɫ\n");  
    color(16);    //��Ϊ�������15���ָ�Ĭ�ϵ���ɫ   
    printf("�ص�ԭ����ɫ\n");  
    //ֱ��ʹ����ɫ����  
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN | BACKGROUND_INTENSITY);  
    printf("��ɫ����   ǰ����ǿ ��ɫ���� ������ǿ\n");   
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15 | 8 | 128 | 64);  
    printf("����ɫ���� ǰ����ǿ ��ɫ���� ������ǿ\n");   
    //��������ٵ��ú���   
    HANDLE JB = GetStdHandle(STD_OUTPUT_HANDLE);//������ʵ�������   
    SetConsoleTextAttribute(JB, 2 | 8);  
    printf("��ɫ����Ӧ���ֱ�\n");  
    for(int i = 0;i < 1000;i ++){  
        //color(16);printf(" ");   
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);  
        printf("%-3d", i);  
        color(16);printf(" ");   
        if(i % 16 == 0) printf("\n");  
    }  
    color(16);  
    return 0;  
    //���Ƶĺ�������system("color XX");��X��ʮ������0~F֮�����,�������ֺ����ı������������,�������öദ�ֲ���ɫ;  
}  



