#include "1.h"
void managebase(Student *stu)    //������Ϣ����
{
	int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.����ѧ����¼ ********\n");
	printf("******** 2.ɾ��ѧ����¼ ********\n");
	printf("******** 3.�޸�ѧ����¼ ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:adddate(stu);break;
		case 2:deldate(stu);break;
		case 3:alterdate(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}