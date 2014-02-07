#include "1.h"
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