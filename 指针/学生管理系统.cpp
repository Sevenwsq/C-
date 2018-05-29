#include <stdio.h>
#include <stdlib.h>
#define FILENAME "student.dat"
#define MAN 1
#define WOMAN 2

typedef struct tagStudent  // ����ѧ���ṹ����
{
    int num;
    char name[20]; 
    int sex; // �����Ա�Ϊ���͵�Ŀ���Ǵ洢һ�����֣������ֵĴ洢��Ҫ�����ֽ�
    int age; 
    char major[20]; 
    struct tagStudent *next;
}STUDENT,*PSTUDENT;
STUDENT ghead; // Ϊ�˲������������˽�㣬ͷ����в��洢ѧ����Ϣ��ȫ�ֱ���

void ShowMenu(); // 1.��ʾ�˵�
int GetMenuChoose(); // 2.��ȡ�û�ѡ��Ĳ˵��ı��
PSTUDENT CreateStudent();// 3.����һ���ڵ�,���᷵��һ���´�����ѧ����Ϣ�ڵ��ָ��
int AddStudent(PSTUDENT pstu); // 4.��ѧ����Ϣ�ڵ���뵽������
PSTUDENT GetPrevAddr(int num); // 5.����ָ�����ѧ���ڵ����һ���ڵ��ָ��
void ShowStudent(int num); // 6.��ʾĳ��ѧ������Ϣ
void ShowAll(); // 7.��ʾ����ѧ����Ϣ
int ShowStudentCount(); // 8.��ʾ��Ϣ����
void ModifyStudent(int num); // 9.�޸�ѧ����Ϣ������ΪҪ�޸ĵ�ѧ���ı��
int Question(const char *pstr); /* 10.ѯ�ʲ���ȡ�û���ѡ��const���η��Ǹ��߱�������ָ��ָ������ݻ�������������ֻ���ģ��������޸�*/
int GetInputNum(); // 11.��ȡ�û������ѧ���ı��
void DelStudent(int num); // 12.ɾ�����Ϊnum��ѧ����Ϣ
void DelAll(); // 13.ɾ�����е�ѧ����Ϣ
void SaveToFile(); // 14.��ѧ����Ϣ���浽�ļ�����
void LoadFromFile(); // 15.���ļ��ж�ȡѧ����Ϣ

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
        system("pause"); // ��ʾ��ͣ��Ϣ���ȴ��û������������ִ��
    }
    return 0;
}

void ShowMenu() // 1.��ʾ�˵�
{
    system("cls");  // �����ʾ�����Ѿ���ʾ����Ϣ
    printf("-------------ѧ������ϵͳ---------------------\n");    
    printf("\n\t1.���ѧ����Ϣ	2.ɾ��ĳ��ѧ����Ϣ		3.��ʾĳ��ѧ����Ϣ\n");    
    printf("\t4.�޸�ѧ����Ϣ	5.ɾ������ѧ����Ϣ		6.��ʾ����ѧ����Ϣ\n");    
    printf("\t7.��ʾ��Ϣ����	8.��ȡ�ļ�ѧ����Ϣ		9.����ѧ����Ϣ���ļ�\n");    
    printf("\t0.�˳�ϵͳ\n");    
    printf("\n------------------------------------------\n");    
} 

int GetMenuChoose() // 2.��ȡ�û�ѡ��Ĳ˵��ı��
{
    int num;
    ShowMenu();
    printf("��ѡ��˵�(0~9):"); 
    while(1!=scanf("%d",&num)||num<0||num>9) // ���������ѧ���Ϸ�ʱ��������
    { 
        ShowMenu(); 
        printf("ѡ��˵�����������ѡ��(0~9):"); 
        //fflush(stdin);  // ������뻺���� 
    } 
    return num; 
}

PSTUDENT CreateStudent()// 3.����һ���ڵ㣬����һ���´�����ѧ����Ϣ�ڵ��ָ��
{    
    int sex; 
    PSTUDENT pstu=(PSTUDENT)malloc(sizeof(STUDENT));
    if(!pstu)
    {
        printf("�����ڴ�ռ�ʧ��!\n");
        return NULL;
    }
    printf("������ѧ���ı��(����)��"); 
    while(1!=scanf("%d",&pstu->num)||GetPrevAddr(pstu->num)) 
    {
        printf("ѧ��������������Ѿ����ڣ�����������ѧ���ı��(����)��"); 
        fflush(stdin); 
    }
    printf("������ѧ��������(С��20�ַ�)��");
    scanf("%20s",pstu->name);
    printf("��ѡ��ѧ�����Ա�(1.��  2.Ů)��"); 
    while(1!=scanf("%d",&sex)||sex<1||sex>2) 
    {
        printf("�Ա�ѡ�����������ѡ��ѧ�����Ա�(1.��  2.Ů)��");    
        fflush(stdin);
    }
    if(1==sex) 
        pstu->sex=MAN;
    else
        pstu->sex=WOMAN;
    printf("������ѧ��������(10~40)��");
    while(1!=scanf("%d",&pstu->age)||pstu->age<10||pstu->age>40)
    {
        printf("���������������������ѧ��������(10~40)��");    
        fflush(stdin); 
    } 
    printf("������ѧ����רҵ(С��20�ַ�)��");    
    scanf("%20s", pstu->major); 
    pstu->next=NULL;
    return pstu; 
}

int AddStudent(PSTUDENT pstu) // 4.��ѧ����Ϣ�ڵ���뵽������
{
    PSTUDENT ps=&ghead;
    if(!pstu)
    {
        return 0;
    }
    if(GetPrevAddr(pstu->num)) // �ж�һ�¸�ѧ����Ϣ�ǲ����Ѿ�����
    {
        printf("���Ϊ%d��ѧ����Ϣ�Ѿ����ڣ�\n",pstu->num);
        free(pstu);// �ͷŸýڵ��ڴ�ռ�
        return 0;
    }
    while(ps->next!=NULL) // whileѭ����Ŀ���ǲ������һ���ڵ�
        ps=ps->next;
    ps->next=pstu; pstu->next=NULL; // �½���Ϊ��������һ�����
    return 1;
}
PSTUDENT GetPrevAddr(int num) // 5.����ָ�����ѧ���ڵ����һ���ڵ��ָ��
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

void ShowStudent(int num) // 6.��ʾĳ��ѧ����Ϣ
{
    PSTUDENT pstu;
    if(pstu=GetPrevAddr(num))
    {
		printf("-----------------------------------------------\n");
		printf("  ���        ����            �Ա�     ����         רҵ\n");
		printf("-----------------------------------------------\n");
		printf("  %-8d  ", pstu->next->num);    
		printf("%-20s", pstu->next->name);    
		printf("%-6s", pstu->next->sex == MAN ? "��" : "Ů");    
		printf("%4d", pstu->next->age);    
		printf("%20s\n", pstu->next->major);            
		printf("-----------------------------------------------\n");   
    }
    else
    {
		printf("û���ҵ����Ϊ%d��ѧ����Ϣ��\n", num);
    }
} 

void ShowAll()// 7.��ʾ����ѧ����Ϣ
{
    PSTUDENT pstu=&ghead;
    printf("----------------------------------------------\n");
    printf("  ���        ����            �Ա�     ����         רҵ\n");
    printf("----------------------------------------------\n");
    while(pstu->next!=NULL)
    { 
        printf("  %-8d  ",pstu->next->num); 
        printf("%-20s",pstu->next->name); 
        printf("%-6s",pstu->next->sex==MAN?"��":"Ů"); 
        printf("%4d",pstu->next->age); 
        printf("%20s\n",pstu->next->major); 
        pstu=pstu->next;
    }
    printf("----------------------------------------------\n");       
}
int ShowStudentCount()// 8.��ʾ��Ϣ����
{
    int count=0; 
    PSTUDENT pstu=&ghead;
    while(pstu->next) 
    {
        ++count; 
        pstu=pstu->next;
    } 
    printf("\n��ǰ����%dλѧ����Ϣ��\n",count);
    return count;
}

void ModifyStudent(int num) // 9.�޸�ѧ����Ϣ������ΪҪ�޸ĵ�ѧ���ı��
{   
    PSTUDENT pstu=GetPrevAddr(num);// ��ȡҪ�޸ĵ�ѧ���ڵ����һ���ڵ�
    int choose; 
    if(!pstu)
    {
        printf("û�б��Ϊ%d��ѧ����Ϣ��\n",num);
        return;
    }
    pstu=pstu->next;
    printf("��ǰѧ��������Ϊ%s,",pstu->name);
    if(Question("ȷ��Ҫ�޸���"))
	   {
        printf("������ѧ��������(С��20�ַ�)��");
        scanf("%20s",pstu->name);
    }
    printf("��ǰѧ�����Ա�Ϊ%s,", pstu->sex==MAN?"��":"Ů");
    if(Question("ȷ��Ҫ�޸���"))
    {
        printf("������ѧ�����Ա�(1.�� 2.Ů)��");
        while(1!=scanf("%d",&choose)||choose<1||choose>2)
        {
            printf("�����������������ѧ�����Ա�(1.�� 2.Ů)��");
            fflush(stdin);
        }
        if(1==choose)
            pstu->sex=MAN;
        else 
            pstu->sex=WOMAN;
    }
    printf("��ǰѧ��������Ϊ%d,",pstu->age);
    if(Question("ȷ��Ҫ�޸���"))
    {
        printf("������ѧ��������(10~40)��");  
        while(1!=scanf("%d",&pstu->age)||pstu->age<10||pstu->age>40)
        {
            printf("���������������������ѧ��������(10~40)��");
            fflush(stdin);
        }
    }
    printf("��ǰѧ����רҵΪ%s,",pstu->major);
    if(Question("ȷ��Ҫ�޸���"))
    {
        printf("������ѧ����רҵ(С��20�ַ�):");
        scanf("%20s",pstu->major);
    }
    printf("�޸���ϣ�\n");
}

int Question(const char *pstr) // 10.ѯ�ʲ���ȡ�û���ѡ��
{
    char answer;
    printf("%s��ѡ��y or n����",pstr);
    while(1!=scanf(" %c", &answer)||(answer!='y' && answer!='n'))
    {
        printf("�������%s������ѡ��y or n����", pstr);
        fflush(stdin); // ������뻺����,C�⺯��
    }
    if('y'==answer)
        return 1;
    else
        return 0;
}

int GetInputNum() // 11.��ȡ�û������ѧ���ı��
{
    int num;
    printf("������ѧ���ı��(����)��");   
    while(1!=scanf("%d",&num))
    {
        printf("��������������������ѧ���ı��(����)��");
        fflush(stdin);
    }
    return num;
}

void DelStudent(int num) // 12.ɾ�����Ϊnum��ѧ����Ϣ
{
    PSTUDENT pstu,ptmp;
    if(pstu=GetPrevAddr(num))    
    {
        if(!Question("ȷ��Ҫɾ����ѧ����Ϣ��"))
        {
            return;
        }
        ptmp=pstu->next;
        pstu->next=ptmp->next;
        free(ptmp);
        printf("ɾ���˱��Ϊ%d��ѧ����Ϣ��\n",num);
    }
    else
    {
        printf("û���ҵ����Ϊ%d��ѧ����Ϣ��\n", num);
    }
}

void DelAll() // 13.ɾ�����е�ѧ����Ϣ
{
    PSTUDENT pstu=ghead.next,ptmp;
    int count=0;
    if(!Question("ȷ��Ҫɾ����ǰ���е�ѧ����Ϣ��"))
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
    printf("��ɾ����%dλѧ����Ϣ��\n",count);
    ghead.next=NULL;
} 

void SaveToFile() // 14.��ѧ����Ϣ���浽�ļ�����
{
    FILE *pf=fopen(FILENAME,"wb");
    PSTUDENT pstu=&ghead;
    int i=0,count=ShowStudentCount();    
    if(!pf)
    {
        printf("�򿪴�д����ļ�ʧ�ܣ�\n");
        return;
    }
    if(!Question("ȷ��Ҫ����ǰѧ����Ϣ���浽�ļ�����"))
    {
        fclose(pf);
        return;
    }
    fwrite(&count,1,sizeof(count),pf);// ��ѧ����Ϣ��������д�뵽�ļ�ͷ
    while(pstu->next)
    {
        fwrite(pstu->next,1,sizeof(STUDENT),pf);// ��ÿλѧ����Ϣд���ļ�
        ++i;
        pstu=pstu->next;
    }
    fclose(pf);
    if(i==count)
    {
        printf("�ɹ���д����%d��ѧ����Ϣ��\n",count);
    }
    else
    {
        printf("Ӧд��%d��ѧ����Ϣ��ʵ��д��%d��ѧ����Ϣ��\n",count,i);    
    }
}

void LoadFromFile()// 15.���ļ��ж�ȡѧ����Ϣ
{
    int i,count=0,repeat=0;
    FILE *pf;
    PSTUDENT pstu;
    printf("��ʾ�����ļ��ж�ȡ��Ϣʱѯ���Ƿ���յ�ǰѧ����Ϣ,����ձ�ʾ�����Ϣ��\n");
    if((pf=fopen(FILENAME,"rb"))==NULL)
    {
        printf("�ļ���û�д��������ֹ�����ѧ����Ϣ�������!\n");
        return;
    }
    DelAll();// ɾ��֮ǰ������ѧ����Ϣ��Ȼ����ļ��ж�ȡ
    fread(&count,1,sizeof count,pf);// ��ȡѧ����Ϣ������ 
    for(i=0;i<count;++i)
    { 
        pstu=(PSTUDENT)malloc(sizeof(STUDENT));
        fread(pstu,1,sizeof(STUDENT),pf);
        if(!AddStudent(pstu))    
        {
            ++repeat;// ͳ���ļ���������ѧ���ظ���������
        }
    }
    fclose(pf);
    printf("�ļ���ȡ��ϣ�����ѧ����Ϣ%d����\n", count-repeat);
}


