#include "1.h"
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