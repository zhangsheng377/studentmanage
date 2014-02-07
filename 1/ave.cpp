#include "1.h"
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