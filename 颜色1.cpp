#include <stdio.h>
#include <windows.h>
int main(void)
{
    POINT curpos ;  //�洢�����Ľṹ�����
    GetCursorPos(&curpos);
   const char *Color_str[10] = {
        "color 0A",
        "color 1A",
        "color 2A",
        "color 3A",
        "color 4A",
        "color 5A",
        "color 6A",
        "color 7A",
        "color 8A",
        "color 9A",
    } ;
    int i ;
    while(1){
       printf("x:%d,y:%d",curpos.x,curpos.y);                //��ȡ��굱ǰ��λ��
        SetConsoleTitleA("���������--------");  //���ô��ڵı���
        for(i = 0 ; i < 10 ; i++)
        {
            system(Color_str[i]);
            Sleep(900);
        }
    }
}

