#include "1.h"
void bukaomain(Student *stu)    //������Ա��Ϣ
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.�γ�һ������Ա ********\n");
	printf("******** 2.�γ̶�������Ա ********\n");
	printf("******** 3.�γ���������Ա ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:bukao(stu,type);break;
		case 2:bukao(stu,type);break;
		case 3:bukao(stu,type);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}