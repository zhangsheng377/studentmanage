#include "1.h"
void deldate(Student *stu)    //ɾ������
{
	int d;
	int a;
	int i;
	int j;
	for(i=0;i<10000;i++)
	{
		d=0;
		printf("������Ҫɾ����ѧ�ţ�����0�˳���");
		scanf("%d",&a);
		if (a==0) break;
	for(j=0;j<10000;j++)
	{
		if (stu[j].num==a) d++;
		if (stu[j].num==a) {stu[j].num=0; printf("��ɾ����\n");}
	}
	if (d==0) printf("���������ѧ�Ų����ڣ�");
	}
savedate(stu);
}