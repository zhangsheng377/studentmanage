#include "1.h"
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