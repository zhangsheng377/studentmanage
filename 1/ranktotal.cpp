#include "1.h"
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