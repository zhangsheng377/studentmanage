#include "1.h"
void managescore(Student *stu)    //ѧ���ɼ�����
{
int type;
	do
	{
	printf("\n���������ѡ����Ӧ����\n");
	printf("******** 1.����ѧ���ܷ� ********\n");
	printf("******** 2.�����ܷ����� ********\n");
	printf("******** 3.������Ա��Ϣ ********\n");
	printf("******** 0.�˳�         ********\n");
		scanf("%d",&type);
	    switch(type)
		{
		case 0:printf("");break;
		case 1:totalscore(stu);break;
		case 2:ranktotal(stu);break;
		case 3:bukaomain(stu);break;
		default:printf("û�и�ѡ�������");break;
		}
	}while(type!=0);
}