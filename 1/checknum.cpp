#include "1.h"
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