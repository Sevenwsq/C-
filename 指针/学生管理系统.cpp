#include <stdio.h>
#include <stdlib.h>
#define FILENAME "student.dat"
#define MAN 1
#define WOMAN 2

typedef struct tagStudent  // 定义学生结构类型
{
    int num;
    char name[20]; 
    int sex; // 定义性别为整型的目的是存储一个汉字，而汉字的存储需要两个字节
    int age; 
    char major[20]; 
    struct tagStudent *next;
}STUDENT,*PSTUDENT;
STUDENT ghead; // 为了操作方便引入了结点，头结点中不存储学生信息，全局变量

void ShowMenu(); // 1.显示菜单
int GetMenuChoose(); // 2.获取用户选择的菜单的编号
PSTUDENT CreateStudent();// 3.创建一个节点,它会返回一个新创建的学生信息节点的指针
int AddStudent(PSTUDENT pstu); // 4.把学生信息节点加入到链表中
PSTUDENT GetPrevAddr(int num); // 5.返回指定编号学生节点的上一个节点的指针
void ShowStudent(int num); // 6.显示某个学生的信息
void ShowAll(); // 7.显示所有学生信息
int ShowStudentCount(); // 8.显示信息数量
void ModifyStudent(int num); // 9.修改学生信息，参数为要修改的学生的编号
int Question(const char *pstr); /* 10.询问并获取用户的选择，const修饰符是告诉编译器该指针指向的内容或者其他变量是只读的，不可以修改*/
int GetInputNum(); // 11.获取用户输入的学生的编号
void DelStudent(int num); // 12.删除编号为num的学生信息
void DelAll(); // 13.删除所有的学生信息
void SaveToFile(); // 14.把学生信息保存到文件当中
void LoadFromFile(); // 15.从文件中读取学生信息

int main(void)
{  
    int running=1; 
    while(running)
    {
        switch(GetMenuChoose())
        {
		case 0: running=0;break;
		case 1: AddStudent(CreateStudent());break;
		case 2: DelStudent(GetInputNum());break;
		case 3: ShowStudent(GetInputNum());break;
		case 4: ModifyStudent(GetInputNum());break;
		case 5: DelAll();break;
		case 6: ShowAll();break;
		case 7: ShowStudentCount();break;
		case 8: LoadFromFile();break;
		case 9: SaveToFile();break;
        }
        system("pause"); // 显示暂停信息，等待用户按任意键继续执行
    }
    return 0;
}

void ShowMenu() // 1.显示菜单
{
    system("cls");  // 清除显示器上已经显示的信息
    printf("-------------学生管理系统---------------------\n");    
    printf("\n\t1.添加学生信息	2.删除某个学生信息		3.显示某个学生信息\n");    
    printf("\t4.修改学生信息	5.删除所有学生信息		6.显示所有学生信息\n");    
    printf("\t7.显示信息数量	8.读取文件学生信息		9.保存学生信息至文件\n");    
    printf("\t0.退出系统\n");    
    printf("\n------------------------------------------\n");    
} 

int GetMenuChoose() // 2.获取用户选择的菜单的编号
{
    int num;
    ShowMenu();
    printf("请选择菜单(0~9):"); 
    while(1!=scanf("%d",&num)||num<0||num>9) // 当输入的数学不合法时重新输入
    { 
        ShowMenu(); 
        printf("选择菜单错误，请重新选择(0~9):"); 
        //fflush(stdin);  // 清空输入缓冲区 
    } 
    return num; 
}

PSTUDENT CreateStudent()// 3.创建一个节点，返回一个新创建的学生信息节点的指针
{    
    int sex; 
    PSTUDENT pstu=(PSTUDENT)malloc(sizeof(STUDENT));
    if(!pstu)
    {
        printf("申请内存空间失败!\n");
        return NULL;
    }
    printf("请输入学生的编号(整型)："); 
    while(1!=scanf("%d",&pstu->num)||GetPrevAddr(pstu->num)) 
    {
        printf("学生编号输入错误或已经存在，请重新输入学生的编号(整型)："); 
        fflush(stdin); 
    }
    printf("请输入学生的姓名(小于20字符)：");
    scanf("%20s",pstu->name);
    printf("请选择学生的性别(1.男  2.女)："); 
    while(1!=scanf("%d",&sex)||sex<1||sex>2) 
    {
        printf("性别选择错误，请重新选择学生的性别(1.男  2.女)：");    
        fflush(stdin);
    }
    if(1==sex) 
        pstu->sex=MAN;
    else
        pstu->sex=WOMAN;
    printf("请输入学生的年龄(10~40)：");
    while(1!=scanf("%d",&pstu->age)||pstu->age<10||pstu->age>40)
    {
        printf("年龄输入错误！请重新输入学生的年龄(10~40)：");    
        fflush(stdin); 
    } 
    printf("请输入学生的专业(小于20字符)：");    
    scanf("%20s", pstu->major); 
    pstu->next=NULL;
    return pstu; 
}

int AddStudent(PSTUDENT pstu) // 4.把学生信息节点加入到链表中
{
    PSTUDENT ps=&ghead;
    if(!pstu)
    {
        return 0;
    }
    if(GetPrevAddr(pstu->num)) // 判断一下该学生信息是不是已经存在
    {
        printf("编号为%d的学生信息已经存在！\n",pstu->num);
        free(pstu);// 释放该节点内存空间
        return 0;
    }
    while(ps->next!=NULL) // while循环的目的是查找最后一个节点
        ps=ps->next;
    ps->next=pstu; pstu->next=NULL; // 新结点成为链表的最后一个结点
    return 1;
}
PSTUDENT GetPrevAddr(int num) // 5.返回指定编号学生节点的上一个节点的指针
{
    PSTUDENT pstu=&ghead;
    while(pstu->next!=NULL)
    {
        if(pstu->next->num==num)
            return pstu;
        pstu=pstu->next;
    }
    return NULL;
}

void ShowStudent(int num) // 6.显示某个学生信息
{
    PSTUDENT pstu;
    if(pstu=GetPrevAddr(num))
    {
		printf("-----------------------------------------------\n");
		printf("  编号        姓名            性别     年龄         专业\n");
		printf("-----------------------------------------------\n");
		printf("  %-8d  ", pstu->next->num);    
		printf("%-20s", pstu->next->name);    
		printf("%-6s", pstu->next->sex == MAN ? "男" : "女");    
		printf("%4d", pstu->next->age);    
		printf("%20s\n", pstu->next->major);            
		printf("-----------------------------------------------\n");   
    }
    else
    {
		printf("没有找到编号为%d的学生信息。\n", num);
    }
} 

void ShowAll()// 7.显示所有学生信息
{
    PSTUDENT pstu=&ghead;
    printf("----------------------------------------------\n");
    printf("  编号        姓名            性别     年龄         专业\n");
    printf("----------------------------------------------\n");
    while(pstu->next!=NULL)
    { 
        printf("  %-8d  ",pstu->next->num); 
        printf("%-20s",pstu->next->name); 
        printf("%-6s",pstu->next->sex==MAN?"男":"女"); 
        printf("%4d",pstu->next->age); 
        printf("%20s\n",pstu->next->major); 
        pstu=pstu->next;
    }
    printf("----------------------------------------------\n");       
}
int ShowStudentCount()// 8.显示信息数量
{
    int count=0; 
    PSTUDENT pstu=&ghead;
    while(pstu->next) 
    {
        ++count; 
        pstu=pstu->next;
    } 
    printf("\n当前共有%d位学生信息。\n",count);
    return count;
}

void ModifyStudent(int num) // 9.修改学生信息，参数为要修改的学生的编号
{   
    PSTUDENT pstu=GetPrevAddr(num);// 获取要修改的学生节点的上一个节点
    int choose; 
    if(!pstu)
    {
        printf("没有编号为%d的学生信息。\n",num);
        return;
    }
    pstu=pstu->next;
    printf("当前学生的姓名为%s,",pstu->name);
    if(Question("确定要修改吗？"))
	   {
        printf("请输入学生的姓名(小于20字符)：");
        scanf("%20s",pstu->name);
    }
    printf("当前学生的性别为%s,", pstu->sex==MAN?"男":"女");
    if(Question("确定要修改吗？"))
    {
        printf("请输入学生的性别(1.男 2.女)：");
        while(1!=scanf("%d",&choose)||choose<1||choose>2)
        {
            printf("输入错误，请重新输入学生的性别(1.男 2.女)：");
            fflush(stdin);
        }
        if(1==choose)
            pstu->sex=MAN;
        else 
            pstu->sex=WOMAN;
    }
    printf("当前学生的年龄为%d,",pstu->age);
    if(Question("确定要修改吗？"))
    {
        printf("请输入学生的年龄(10~40)：");  
        while(1!=scanf("%d",&pstu->age)||pstu->age<10||pstu->age>40)
        {
            printf("年龄输入错误！请重新输入学生的年龄(10~40)：");
            fflush(stdin);
        }
    }
    printf("当前学生的专业为%s,",pstu->major);
    if(Question("确定要修改吗？"))
    {
        printf("请输入学生的专业(小于20字符):");
        scanf("%20s",pstu->major);
    }
    printf("修改完毕！\n");
}

int Question(const char *pstr) // 10.询问并获取用户的选择
{
    char answer;
    printf("%s请选择（y or n）：",pstr);
    while(1!=scanf(" %c", &answer)||(answer!='y' && answer!='n'))
    {
        printf("输入错误！%s请重新选择（y or n）：", pstr);
        fflush(stdin); // 清空输入缓冲区,C库函数
    }
    if('y'==answer)
        return 1;
    else
        return 0;
}

int GetInputNum() // 11.获取用户输入的学生的编号
{
    int num;
    printf("请输入学生的编号(整型)：");   
    while(1!=scanf("%d",&num))
    {
        printf("编号输入错误！请重新输入学生的编号(整型)：");
        fflush(stdin);
    }
    return num;
}

void DelStudent(int num) // 12.删除编号为num的学生信息
{
    PSTUDENT pstu,ptmp;
    if(pstu=GetPrevAddr(num))    
    {
        if(!Question("确定要删除该学生信息吗？"))
        {
            return;
        }
        ptmp=pstu->next;
        pstu->next=ptmp->next;
        free(ptmp);
        printf("删除了编号为%d的学生信息。\n",num);
    }
    else
    {
        printf("没有找到编号为%d的学生信息。\n", num);
    }
}

void DelAll() // 13.删除所有的学生信息
{
    PSTUDENT pstu=ghead.next,ptmp;
    int count=0;
    if(!Question("确定要删除当前所有的学生信息吗？"))
    {
        return; 
    }
    while(pstu)
    {
        ptmp=pstu;
        pstu=pstu->next;
        free(ptmp);
        ++count;
    }
    printf("共删除了%d位学生信息。\n",count);
    ghead.next=NULL;
} 

void SaveToFile() // 14.把学生信息保存到文件当中
{
    FILE *pf=fopen(FILENAME,"wb");
    PSTUDENT pstu=&ghead;
    int i=0,count=ShowStudentCount();    
    if(!pf)
    {
        printf("打开待写入的文件失败！\n");
        return;
    }
    if(!Question("确定要将当前学生信息保存到文件中吗？"))
    {
        fclose(pf);
        return;
    }
    fwrite(&count,1,sizeof(count),pf);// 把学生信息的数量先写入到文件头
    while(pstu->next)
    {
        fwrite(pstu->next,1,sizeof(STUDENT),pf);// 把每位学生信息写入文件
        ++i;
        pstu=pstu->next;
    }
    fclose(pf);
    if(i==count)
    {
        printf("成功的写入了%d条学生信息。\n",count);
    }
    else
    {
        printf("应写入%d条学生信息，实际写入%d条学生信息。\n",count,i);    
    }
}

void LoadFromFile()// 15.从文件中读取学生信息
{
    int i,count=0,repeat=0;
    FILE *pf;
    PSTUDENT pstu;
    printf("提示：从文件中读取信息时询问是否清空当前学生信息,不清空表示添加信息。\n");
    if((pf=fopen(FILENAME,"rb"))==NULL)
    {
        printf("文件还没有创建，请手工输入学生信息并保存吧!\n");
        return;
    }
    DelAll();// 删除之前的所有学生信息，然后从文件中读取
    fread(&count,1,sizeof count,pf);// 获取学生信息的数量 
    for(i=0;i<count;++i)
    { 
        pstu=(PSTUDENT)malloc(sizeof(STUDENT));
        fread(pstu,1,sizeof(STUDENT),pf);
        if(!AddStudent(pstu))    
        {
            ++repeat;// 统计文件与链表中学号重复的数据量
        }
    }
    fclose(pf);
    printf("文件读取完毕！新增学生信息%d条。\n", count-repeat);
}


