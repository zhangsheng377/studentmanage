#include "1.h"
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