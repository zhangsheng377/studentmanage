#include "1.h"
void minscore(Student *stu)    //��γ���ͷ�
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ�һ��ͷ� ********\n");
	printf("******** 2.��γ̶���ͷ� ********\n");
	printf("******** 3.��γ�����ͷ� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:min(stu,type);break;
		case 2:min(stu,type);break;
		case 3:min(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}