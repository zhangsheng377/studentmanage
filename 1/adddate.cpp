#include "1.h"
void adddate(Student *stu)    //����ѧ����¼����ʵ����ֱ����ӣ�֮����ͳһ����
{
	char c[20];
	int a;
	int b;
	int j;
	int i;
	for(i=0;i<10000;i++)
	{

while(stu[i].num!=0)
{
	i++;
}

			printf("������ѧ�ţ�����0�˳�����");	
			scanf("%d",&a);
			if (a==0) break;
	for(j=0;j<10000;j++)
	{
			if (stu[j].num==a) printf("ѧ���ظ�!");
			if (stu[j].num==a) b=1;
	}
			if (b==1) break;
			stu[i].num=a;
			printf("������������");		
			scanf("%s",&c);
		    strcpy(stu[i].name,c);

			printf("�������Ա�");	
			scanf("%s",&stu[i].sex);

			printf("������ɼ�һ��");	
			scanf("%d",&stu[i].score[0]);

			printf("������ɼ�����");	
			scanf("%d",&stu[i].score[1]);

			printf("������ɼ�����");	
			scanf("%d",&stu[i].score[2]);

			printf("\n");
			stu[i].total=0;

			stu[i].rank=0;
	}

savedate(stu);

	if (b==1) printf("\n");
	if (b==1) adddate(stu);
}
