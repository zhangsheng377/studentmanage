#include "stdio.h"
#include "string.h"
#define printdate printf("\nѧ�ţ�%d\n������%s\n�Ա�%s\n�ɼ�һ��%d\n�ɼ�����%d\n�ɼ�����%d\n�ܷ֣�%d\n������%d\n",stu[i].num,&stu[i].name,&stu[i].sex,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].total,stu[i].rank)


struct Student
{
	int num;
	char name[20];
	char sex[10];
	int score[4];
	int total;
	int rank;
};
typedef struct Student Student;


void readdate(Student *stu);
void printbase(Student *stu);
void managebase(Student *stu);
void adddate(Student *stu);
void savedate(Student *stu);
void deldate(Student *stu);
void alterdate(Student *stu);
void managescore(Student *stu);
void totalscore(Student *stu);
void ranktotal(Student *stu);
void rankscore(Student *stu);
void maxscore(Student *stu);
void max(Student *stu,int type);
void minscore(Student *stu);
void min(Student *stu,int type);
void avescore(Student *stu);
void ave(Student *stu,int type);
void checkbase(Student *stu);
void checknum(Student *stu);
void checkname(Student *stu);
void checkrank(Student *stu);
void bukaomain(Student *stu);
void bukao(Student *stu,int type);



void readdate(Student *stu)      //���ļ���ȡ���ݵ�����
{
	FILE *fp;
	if((fp=fopen("student.dat","rb"))==NULL)
	{
	}

		fread(stu,sizeof(Student),10000,fp);

	fclose(fp);
}

void printbase(Student *stu)    //��ʾ������Ϣ
{
	int i;
	for(i=0;i<10000;i++)
	{
		if (stu[i].num!=0) printdate;
	}
}

void managebase(Student *stu)    //������Ϣ����
{
	int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.����ѧ����¼ ********\n");
	printf("******** 2.ɾ��ѧ����¼ ********\n");
	printf("******** 3.�޸�ѧ����¼ ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:adddate(stu);break;
		case 2:deldate(stu);break;
		case 3:alterdate(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void adddate(Student *stu)    //����ѧ����¼����ʵ����ֱ����ӣ�֮����ͳһ����
{
	char c[20];
	int a;
	int b;
	int j;
	int i;
	for(i=0;i<10000;i++)
	{

while(stu[i].num!=0)
{
	i++;
}

			printf("������ѧ�ţ�����0�˳�����");	
			scanf("%d",&a);
			if (a==0) break;
	for(j=0;j<10000;j++)
	{
			if (stu[j].num==a) printf("ѧ���ظ�!");
			if (stu[j].num==a) b=1;
	}
			if (b==1) break;
			stu[i].num=a;
			printf("������������");		
			scanf("%s",&c);
		    strcpy(stu[i].name,c);

			printf("�������Ա�");	
			scanf("%s",&stu[i].sex);

			printf("������ɼ�һ��");	
			scanf("%d",&stu[i].score[0]);

			printf("������ɼ�����");	
			scanf("%d",&stu[i].score[1]);

			printf("������ɼ�����");	
			scanf("%d",&stu[i].score[2]);

			printf("\n");
			stu[i].total=0;

			stu[i].rank=0;
	}

savedate(stu);

	if (b==1) printf("\n");
	if (b==1) adddate(stu);
}

void savedate(Student *stu)    //�������ݵ��ļ�
{
FILE *fp;
	if((fp=fopen("student.dat","wb"))==NULL)
	{
	}
	fwrite(stu,sizeof(Student),10000,fp);
	fclose(fp);
}

void deldate(Student *stu)    //ɾ������
{
	int d;
	int a;
	int i;
	int j;
	for(i=0;i<10000;i++)
	{
		d=0;
		printf("������Ҫɾ����ѧ�ţ�����0�˳���");
		scanf("%d",&a);
		if (a==0) break;
	for(j=0;j<10000;j++)
	{
		if (stu[j].num==a) d++;
		if (stu[j].num==a) {stu[j].num=0; printf("��ɾ����\n");}
	}
	if (d==0) printf("���������ѧ�Ų����ڣ�");
	}
savedate(stu);
}

void alterdate(Student *stu)    //�޸�����
{
	int d;
	char b[20];
	char c[10];
	int a;
	int i;
	int j;
	for(i=0;i<10000;i++)
	{
		d=0;
		printf("������Ҫ�޸ĵ�ѧ�ţ�����0�˳���");
		scanf("%d",&a);
		if (a==0) break;
	for(j=0;j<10000;j++)
	{
		if (stu[j].num==a) d++;
		if (stu[j].num==a) printf("������������");
		if (stu[j].num==a) scanf("%s",&b);
		if (stu[j].num==a) strcpy(stu[j].name,b);
		if (stu[j].num==a) printf("���������Ա�");
		if (stu[j].num==a) scanf("%s",&c);
		if (stu[j].num==a) strcpy(stu[j].sex,c);
		if (stu[j].num==a) printf("�������³ɼ�һ");
		if (stu[j].num==a) scanf("%d",&stu[j].score[0]);
		if (stu[j].num==a) printf("�������³ɼ���");
		if (stu[j].num==a) scanf("%d",&stu[j].score[1]);
		if (stu[j].num==a) printf("�������³ɼ���");
		if (stu[j].num==a) scanf("%d",&stu[j].score[2]);
		if (stu[j].num==a) stu[j].total=0;
		if (stu[j].num==a) stu[j].rank=0;
	}
	if (d==0) printf("���������ѧ�Ų����ڣ�");
	}
savedate(stu);
}

void managescore(Student *stu)    //ѧ���ɼ�����
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.����ѧ���ܷ� ********\n");
	printf("******** 2.�����ܷ����� ********\n");
	printf("******** 3.������Ա��Ϣ ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:totalscore(stu);break;
		case 2:ranktotal(stu);break;
		case 3:bukaomain(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void totalscore(Student *stu)    //����ѧ���ܷ�
{
	int i;
	for(i=0;i<10000;i++)
	{
		stu[i].total=0;
		if (stu[i].num!=0) stu[i].total=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
	}
	printf("����ɹ���");
savedate(stu);
}

void ranktotal(Student *stu)    //�����ܷ�����
{
	int b;
	int a;
	int j;
	int i;
	a=0;
	for(i=0;i<10000;i++)
	{
		if (stu[i].num!=0) a++;
	}
	for(i=0;i<10000;i++)
	{
		b=0;
	for(j=0;j<10000;j++)
	{
		if ((stu[i].total>stu[j].total)&&(stu[j].num!=0)) b++;
	}
	stu[i].rank=a-b;
	}
	printf("�����ɹ���");
savedate(stu);
}

void bukaomain(Student *stu)    //������Ա��Ϣ
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.�γ�һ������Ա ********\n");
	printf("******** 2.�γ̶�������Ա ********\n");
	printf("******** 3.�γ���������Ա ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:bukao(stu,type);break;
		case 2:bukao(stu,type);break;
		case 3:bukao(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void bukao(Student *stu,int type)    //��ʾ������Ա
{
	int a;
	int i;
	i=0;
	for(a=0;a<10000;a++)
	{
		if ((stu[a].score[type-1]<60)&&(stu[a].num!=0)) 
		{i=a;
			printdate;
		}
	}

}



void rankscore(Student *stu)    //���Գɼ�ͳ��
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ���߷� ********\n");
	printf("******** 2.��γ���ͷ� ********\n");
	printf("******** 3.��γ�ƽ���� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:maxscore(stu);break;
		case 2:minscore(stu);break;
		case 3:avescore(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void maxscore(Student *stu)    //��γ���߷�
{

int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ�һ��߷� ********\n");
	printf("******** 2.��γ̶���߷� ********\n");
	printf("******** 3.��γ�����߷� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:max(stu,type);break;
		case 2:max(stu,type);break;
		case 3:max(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void max(Student *stu,int type)    //����߷�
{
	int a;
	int i;
	i=0;
	for(a=0;a<10000;a++)
	{
		if ((stu[a].score[type-1]>stu[i].score[type-1])&&(stu[a].num!=0)) i=a;
	}
	printdate;
}

void minscore(Student *stu)    //��γ���ͷ�
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ�һ��ͷ� ********\n");
	printf("******** 2.��γ̶���ͷ� ********\n");
	printf("******** 3.��γ�����ͷ� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:min(stu,type);break;
		case 2:min(stu,type);break;
		case 3:min(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void min(Student *stu,int type)    //����ͷ�
{
	int a;
	int i;
	i=0;
	for(a=0;a<10000;a++)
	{
		if ((stu[a].score[type-1]<stu[i].score[type-1])&&(stu[a].num!=0)) i=a;
	}
	printdate;
}

void avescore(Student *stu)    //��γ�ƽ����
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ�һƽ���� ********\n");
	printf("******** 2.��γ̶�ƽ���� ********\n");
	printf("******** 3.��γ���ƽ���� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:ave(stu,type);break;
		case 2:ave(stu,type);break;
		case 3:ave(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void ave(Student *stu,int type)    //��ƽ����
{
	int b;
	int a;
	int i;
	i=0;
	b=0;
	for(a=0;a<10000;a++)
	{
		if (stu[a].num!=0) b++;
		if (stu[a].num!=0) i=i+stu[a].score[type-1];
	}
	switch(type)
		{
		case 1:printf("�γ�һƽ����Ϊ%d\n",i/b);break;
		case 2:printf("�γ̶�ƽ����Ϊ%d\n",i/b);break;
		case 3:printf("�γ���ƽ����Ϊ%d\n",i/b);break;
		}
}

void checkbase(Student *stu)    //����������ѯ
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��ѧ�Ų�ѯ ********\n");
	printf("******** 2.��������ѯ ********\n");
	printf("******** 3.�����β�ѯ ********\n");
	printf("******** 0.�˳�       ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:checknum(stu);break;
		case 2:checkname(stu);break;
		case 3:checkrank(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}

void checknum(Student *stu)    //��ѧ�Ų�ѯ
{
	int c;
	int b;
	int i;
	int a;
	i=0;
for (c=0;c<10000;c++)
{
	printf ("������Ҫ��ѯ��ѧ�ţ�������0�˳���");
	scanf("%d",&a);
	if (a==0) break;
	for(b=0;b<10000;b++)
	{
		if (stu[b].num==a) 
		{i=b;
			printdate;
		}
		else
		{printf ("û�д�ѧ�ţ�");
		break;}
	}

}
}

void checkname(Student *stu)    //��������ѯ
{
	int c;
	int b;
	int i;
	char a[20];
	i=0;
for (c=0;c<10000;c++)
{
	printf ("������Ҫ��ѯ��������������0�˳���");
	scanf("%s",&a);
	if (strncmp(a,"0",20)==0) break;
	for(b=0;b<10000;b++)
	{
		if ((strncmp(stu[b].name,a,20)==0)&&(stu[b].num!=0)) 
		{i=b;
			printdate;
		}
		else
		{	printf ("û�д�������");
		break;}
	}

}
}

void checkrank(Student *stu)    //�����β�ѯ
{
	int c,d;
	int b;
	int i;
	int a;

for (c=0;c<10000;c++)
{
	i=0;d=0;
	printf ("������Ҫ��ѯ�����Σ�������0�˳���");
	scanf("%d",&a);
	if (a==0) break;
	for(b=0;b<10000;b++)
	{
		if ((stu[b].rank==a)&&(stu[b].num!=0)) 
		{i=b;d=1;
			printdate;break;
		}
	}
	if (d!=1) 	printf ("û����Ҫ������Σ�");
}
}










int main()
{
	Student stu[10000];               
	int i;
	for(i=0;i<10000;i++)
	{
		stu[i].num=0;
	}
	int type;
	do
	{
	readdate(stu);
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��ʾ������Ϣ ********\n");
	printf("******** 2.������Ϣ���� ********\n");
	printf("******** 3.ѧ���ɼ����� ********\n");
	printf("******** 4.���Գɼ�ͳ�� ********\n");
	printf("******** 5.����������ѯ ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:printbase(stu);break;
		case 2:managebase(stu);break;
		case 3:managescore(stu);break;
		case 4:rankscore(stu);break;
		case 5:checkbase(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
	return 0;
}