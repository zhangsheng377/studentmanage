#include "1.h"
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