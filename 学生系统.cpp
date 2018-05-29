#include <stdio.h>
#include <stdlib.h>
#define FILENAME "student.dat"
#define MAN 1
#define WOMAN 2

typedef struct tagStudent // ����ѧ���ṹ����
{
	int num;
	char name[20];
	int sex; //1��ʾ�У�2��ʾŮ
	int age;
	char major[20];
	struct tagStudent *next; 
 } STUDENT,*PSTUDENT;
 STUUDENT ghead; //Ϊ�˲������������˽�㣬ͷ����в�����ѧ����Ϣ ��ȫ�ֱ���
 
 void ShowMenu (); //1.��ʾ�˵�
 int GetMenuChoose (); //2.��ȡ�û�ѡ��Ĳ˵����
 PSTUDENT CreateStudent (); //3.����һ���ڵ㣬���᷵��һ���´�����ѧ����Ϣ�ڵ��ָ�� 
 int AddStudent(PSTUDENT pstu); //4.��ѧ����Ϣ�ڵ���뵽������
 PSTUDENT GetPrevaddr (int num); //5.����ָ�����ѧ���ڵ��һ���ڵ��ָ�� 
 void ShowStudent (int num); //6.��ʾĳ��ѧ������Ϣ
 void ShowAll();//7.��ʾ����ѧ������Ϣ
 int ShowStudentCount();//8.��ʾѧ������
 void ModifyStudent(int num);//9.�޸�ѧ����Ϣ
 int Question (const char *pstr);/*10.ѯ�ʲ���ȡ�û���ѡ��
 const���η��Ǹ��߱�������ָ��ָ������ݻ�������������ֻ���ģ������޸�*/
 int GetInputNum(); //11.��ȡ�û������ѧ�����
 void DelStudent(int num); //12.ɾ�����Ϊnum��ѧ����Ϣ
 void DelAll();//13.ɾ�����е�ѧ����Ϣ 
 void SaveToFile(); //14.��ѧ����Ϣ���浽�ĵ�֮�� 
 void LoadForFile();//15.���ļ��ж�ȡѧ����Ϣ
 
  
  
  
