#include "1.h"
int main()
{
	Student stu[10000];               
	int i;
	for(i=0;i<10000;i++)
	{
		stu[i].num=0;
	}
	int type;
	do
	{
	readdate(stu);
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��ʾ������Ϣ ********\n");
	printf("******** 2.������Ϣ���� ********\n");
	printf("******** 3.ѧ���ɼ����� ********\n");
	printf("******** 4.���Գɼ�ͳ�� ********\n");
	printf("******** 5.����������ѯ ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:printbase(stu);break;
		case 2:managebase(stu);break;
		case 3:managescore(stu);break;
		case 4:rankscore(stu);break;
		case 5:checkbase(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
	return 0;
}