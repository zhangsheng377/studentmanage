#include "1.h"
void checkrank(Student *stu)    //�����β�ѯ
{
	int c,d;
	int b;
	int i;
	int a;

for (c=0;c<10000;c++)
{
	i=0;d=0;
	printf ("������Ҫ��ѯ�����Σ�������0�˳���");
	scanf("%d",&a);
	if (a==0) break;
	for(b=0;b<10000;b++)
	{
		if ((stu[b].rank==a)&&(stu[b].num!=0)) 
		{i=b;d=1;
			printdate;break;
		}
	}
	if (d!=1) 	printf ("û����Ҫ������Σ�");
}
}