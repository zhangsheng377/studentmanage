#include "stdio.h"
#include "string.h"
#define printdate printf("\n学号：%d\n姓名：%s\n性别：%s\n成绩一：%d\n成绩二：%d\n成绩三：%d\n总分：%d\n排名：%d\n",stu[i].num,&stu[i].name,&stu[i].sex,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].total,stu[i].rank)


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



void readdate(Student *stu)      //从文件读取数据到数组
{
	FILE *fp;
	if((fp=fopen("student.dat","rb"))==NULL)
	{
	}

		fread(stu,sizeof(Student),10000,fp);

	fclose(fp);
}

void printbase(Student *stu)    //显示基本信息
{
	int i;
	for(i=0;i<10000;i++)
	{
		if (stu[i].num!=0) printdate;
	}
}

void managebase(Student *stu)    //基本信息管理
{
	int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.插入学生记录 ********\n");
	printf("******** 2.删除学生记录 ********\n");
	printf("******** 3.修改学生记录 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:adddate(stu);break;
		case 2:deldate(stu);break;
		case 3:alterdate(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void adddate(Student *stu)    //插入学生记录（其实就是直接添加，之后再统一排序）
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

			printf("请输入学号（输入0退出）：");	
			scanf("%d",&a);
			if (a==0) break;
	for(j=0;j<10000;j++)
	{
			if (stu[j].num==a) printf("学号重复!");
			if (stu[j].num==a) b=1;
	}
			if (b==1) break;
			stu[i].num=a;
			printf("请输入姓名：");		
			scanf("%s",&c);
		    strcpy(stu[i].name,c);

			printf("请输入性别：");	
			scanf("%s",&stu[i].sex);

			printf("请输入成绩一：");	
			scanf("%d",&stu[i].score[0]);

			printf("请输入成绩二：");	
			scanf("%d",&stu[i].score[1]);

			printf("请输入成绩三：");	
			scanf("%d",&stu[i].score[2]);

			printf("\n");
			stu[i].total=0;

			stu[i].rank=0;
	}

savedate(stu);

	if (b==1) printf("\n");
	if (b==1) adddate(stu);
}

void savedate(Student *stu)    //保存数据到文件
{
FILE *fp;
	if((fp=fopen("student.dat","wb"))==NULL)
	{
	}
	fwrite(stu,sizeof(Student),10000,fp);
	fclose(fp);
}

void deldate(Student *stu)    //删除数据
{
	int d;
	int a;
	int i;
	int j;
	for(i=0;i<10000;i++)
	{
		d=0;
		printf("请输入要删除的学号（输入0退出）");
		scanf("%d",&a);
		if (a==0) break;
	for(j=0;j<10000;j++)
	{
		if (stu[j].num==a) d++;
		if (stu[j].num==a) {stu[j].num=0; printf("已删除！\n");}
	}
	if (d==0) printf("您所输入的学号不存在！");
	}
savedate(stu);
}

void alterdate(Student *stu)    //修改数据
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
		printf("请输入要修改的学号（输入0退出）");
		scanf("%d",&a);
		if (a==0) break;
	for(j=0;j<10000;j++)
	{
		if (stu[j].num==a) d++;
		if (stu[j].num==a) printf("请输入新姓名");
		if (stu[j].num==a) scanf("%s",&b);
		if (stu[j].num==a) strcpy(stu[j].name,b);
		if (stu[j].num==a) printf("请输入新性别");
		if (stu[j].num==a) scanf("%s",&c);
		if (stu[j].num==a) strcpy(stu[j].sex,c);
		if (stu[j].num==a) printf("请输入新成绩一");
		if (stu[j].num==a) scanf("%d",&stu[j].score[0]);
		if (stu[j].num==a) printf("请输入新成绩二");
		if (stu[j].num==a) scanf("%d",&stu[j].score[1]);
		if (stu[j].num==a) printf("请输入新成绩三");
		if (stu[j].num==a) scanf("%d",&stu[j].score[2]);
		if (stu[j].num==a) stu[j].total=0;
		if (stu[j].num==a) stu[j].rank=0;
	}
	if (d==0) printf("您所输入的学号不存在！");
	}
savedate(stu);
}

void managescore(Student *stu)    //学生成绩管理
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.计算学生总分 ********\n");
	printf("******** 2.根据总分排名 ********\n");
	printf("******** 3.补考人员信息 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:totalscore(stu);break;
		case 2:ranktotal(stu);break;
		case 3:bukaomain(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void totalscore(Student *stu)    //计算学生总分
{
	int i;
	for(i=0;i<10000;i++)
	{
		stu[i].total=0;
		if (stu[i].num!=0) stu[i].total=stu[i].score[0]+stu[i].score[1]+stu[i].score[2];
	}
	printf("计算成功！");
savedate(stu);
}

void ranktotal(Student *stu)    //根据总分排名
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
	printf("排名成功！");
savedate(stu);
}

void bukaomain(Student *stu)    //补考人员信息
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.课程一补考人员 ********\n");
	printf("******** 2.课程二补考人员 ********\n");
	printf("******** 3.课程三补考人员 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:bukao(stu,type);break;
		case 2:bukao(stu,type);break;
		case 3:bukao(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void bukao(Student *stu,int type)    //显示补考人员
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



void rankscore(Student *stu)    //考试成绩统计
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程最高分 ********\n");
	printf("******** 2.求课程最低分 ********\n");
	printf("******** 3.求课程平均分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:maxscore(stu);break;
		case 2:minscore(stu);break;
		case 3:avescore(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void maxscore(Student *stu)    //求课程最高分
{

int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程一最高分 ********\n");
	printf("******** 2.求课程二最高分 ********\n");
	printf("******** 3.求课程三最高分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:max(stu,type);break;
		case 2:max(stu,type);break;
		case 3:max(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void max(Student *stu,int type)    //求最高分
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

void minscore(Student *stu)    //求课程最低分
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程一最低分 ********\n");
	printf("******** 2.求课程二最低分 ********\n");
	printf("******** 3.求课程三最低分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:min(stu,type);break;
		case 2:min(stu,type);break;
		case 3:min(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void min(Student *stu,int type)    //求最低分
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

void avescore(Student *stu)    //求课程平均分
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.求课程一平均分 ********\n");
	printf("******** 2.求课程二平均分 ********\n");
	printf("******** 3.求课程三平均分 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:ave(stu,type);break;
		case 2:ave(stu,type);break;
		case 3:ave(stu,type);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void ave(Student *stu,int type)    //求平均分
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
		case 1:printf("课程一平均分为%d\n",i/b);break;
		case 2:printf("课程二平均分为%d\n",i/b);break;
		case 3:printf("课程三平均分为%d\n",i/b);break;
		}
}

void checkbase(Student *stu)    //根据条件查询
{
int type;
	do
	{
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.按学号查询 ********\n");
	printf("******** 2.按姓名查询 ********\n");
	printf("******** 3.按名次查询 ********\n");
	printf("******** 0.退出       ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:checknum(stu);break;
		case 2:checkname(stu);break;
		case 3:checkrank(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
}

void checknum(Student *stu)    //按学号查询
{
	int c;
	int b;
	int i;
	int a;
	i=0;
for (c=0;c<10000;c++)
{
	printf ("请输入要查询的学号：（输入0退出）");
	scanf("%d",&a);
	if (a==0) break;
	for(b=0;b<10000;b++)
	{
		if (stu[b].num==a) 
		{i=b;
			printdate;
		}
		else
		{printf ("没有此学号，");
		break;}
	}

}
}

void checkname(Student *stu)    //按姓名查询
{
	int c;
	int b;
	int i;
	char a[20];
	i=0;
for (c=0;c<10000;c++)
{
	printf ("请输入要查询的姓名：（输入0退出）");
	scanf("%s",&a);
	if (strncmp(a,"0",20)==0) break;
	for(b=0;b<10000;b++)
	{
		if ((strncmp(stu[b].name,a,20)==0)&&(stu[b].num!=0)) 
		{i=b;
			printdate;
		}
		else
		{	printf ("没有此姓名，");
		break;}
	}

}
}

void checkrank(Student *stu)    //按名次查询
{
	int c,d;
	int b;
	int i;
	int a;

for (c=0;c<10000;c++)
{
	i=0;d=0;
	printf ("请输入要查询的名次：（输入0退出）");
	scanf("%d",&a);
	if (a==0) break;
	for(b=0;b<10000;b++)
	{
		if ((stu[b].rank==a)&&(stu[b].num!=0)) 
		{i=b;d=1;
			printdate;break;
		}
	}
	if (d!=1) 	printf ("没有您要查的名次，");
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
	printf("\n请输入序号选择相应功能\n");
	printf("******** 1.显示基本信息 ********\n");
	printf("******** 2.基本信息管理 ********\n");
	printf("******** 3.学生成绩管理 ********\n");
	printf("******** 4.考试成绩统计 ********\n");
	printf("******** 5.根据条件查询 ********\n");
	printf("******** 0.退出         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:printbase(stu);break;
		case 2:managebase(stu);break;
		case 3:managescore(stu);break;
		case 4:rankscore(stu);break;
		case 5:checkbase(stu);break;
		default:printf("没有该选项，请重输");break;
		}
	}while(type!=0);
	return 0;
}