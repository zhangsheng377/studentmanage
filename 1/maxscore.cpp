#include "1.h"
void maxscore(Student *stu)    //��γ���߷�
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ�һ��߷� ********\n");
	printf("******** 2.��γ̶���߷� ********\n");
	printf("******** 3.��γ�����߷� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:max(stu,type);break;
		case 2:max(stu,type);break;
		case 3:max(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}