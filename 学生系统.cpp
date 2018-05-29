#include <stdio.h>
#include <stdlib.h>
#define FILENAME "student.dat"
#define MAN 1
#define WOMAN 2

typedef struct tagStudent // 定义学生结构类型
{
	int num;
	char name[20];
	int sex; //1表示男，2表示女
	int age;
	char major[20];
	struct tagStudent *next; 
 } STUDENT,*PSTUDENT;
 STUUDENT ghead; //为了操作方便引入了结点，头结点中不储存学生信息 ，全局变量
 
 void ShowMenu (); //1.显示菜单
 int GetMenuChoose (); //2.获取用户选择的菜单编号
 PSTUDENT CreateStudent (); //3.创建一个节点，它会返回一个新创建的学生信息节点的指针 
 int AddStudent(PSTUDENT pstu); //4.把学生信息节点加入到链表中
 PSTUDENT GetPrevaddr (int num); //5.返回指定编号学生节点的一个节点的指针 
 void ShowStudent (int num); //6.显示某个学生的信息
 void ShowAll();//7.显示所有学生的信息
 int ShowStudentCount();//8.显示学生数量
 void ModifyStudent(int num);//9.修改学生信息
 int Question (const char *pstr);/*10.询问并获取用户的选择，
 const修饰符是告诉编译器该指针指向的内容或者其他变量是只读的，不可修改*/
 int GetInputNum(); //11.获取用户输入的学生编号
 void DelStudent(int num); //12.删除编号为num的学生信息
 void DelAll();//13.删除所有的学生信息 
 void SaveToFile(); //14.把学生信息保存到文档之中 
 void LoadForFile();//15.从文件中读取学生信息
 
  
  
  
