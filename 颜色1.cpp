#include <stdio.h>
#include <windows.h>
int main(void)
{
    POINT curpos ;  //存储坐标点的结构体变量
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
       printf("x:%d,y:%d",curpos.x,curpos.y);                //获取鼠标当前的位置
        SetConsoleTitleA("闪闪发光的--------");  //设置窗口的标题
        for(i = 0 ; i < 10 ; i++)
        {
            system(Color_str[i]);
            Sleep(900);
        }
    }
}

