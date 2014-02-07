#include "1.h"
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