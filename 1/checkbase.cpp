#include "1.h"
void checkbase(Student *stu)    //����������ѯ
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.��ѧ�Ų�ѯ ********\n");
	printf("******** 2.��������ѯ ********\n");
	printf("******** 3.�����β�ѯ ********\n");
	printf("******** 0.�˳�       ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:checknum(stu);break;
		case 2:checkname(stu);break;
		case 3:checkrank(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}