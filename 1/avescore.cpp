#include "1.h"
void avescore(Student *stu)    //��γ�ƽ����
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��γ�һƽ���� ********\n");
	printf("******** 2.��γ̶�ƽ���� ********\n");
	printf("******** 3.��γ���ƽ���� ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:ave(stu,type);break;
		case 2:ave(stu,type);break;
		case 3:ave(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}